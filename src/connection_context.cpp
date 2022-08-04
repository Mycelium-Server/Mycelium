#include "connection_context.h"

#include <iostream>

struct AsyncData {
  ByteBuffer* buffer;
  uv_stream_t* stream;
  std::mutex* async_mutex;
};

ConnectionContext::ConnectionContext(Pipeline* pipeline, uv_stream_t* stream)
    : pipeline(pipeline),
      stream(stream) {
  eventLoop = new EventLoop; // TODO: Event loop factory
}

ConnectionContext::~ConnectionContext() {
  delete pipeline;
  free(async);
  delete eventLoop;
}

void write_cb(uv_write_t* req, int status) {
  if (status) {
    std::cout << "Unable to write data: " << uv_strerror(status);
    return;
  }
  free(req);
}

void ConnectionContext::write(void* object, bool isAsync) {
  void* src = (void*) object;
  void* dst;
  pipeline->forEach([&](AbstractHandler* handler, int) {
    if (handler->isOutboundHandler()) {
      bool res = ((OutboundHandler*) handler)->encode(this, src, dst);
      src = dst;
      return res;
    }
    return true;
  });

  if (!src)
    return;
  auto* buf = (ByteBuffer*) src;

  async_mutex.lock();

  auto* data = new AsyncData();
  data->async_mutex = &async_mutex;
  data->buffer = buf;
  data->stream = stream;
  async->data = data;

  uv_async_send(async);
  async_mutex.unlock();
}

void ConnectionContext::read(void* src, int idx) {
  if (idx >= pipeline->handlers().size())
    return;
  AbstractHandler* handler = pipeline->get(idx);
  if (!handler->isInboundHandler()) {
    read(src, idx + 1);
    return;
  }

  std::vector<void*> dst;
  auto* inbound = (InboundHandler*) handler;
  if (!inbound->decode(this, src, dst))
    return;
  for (void*& obj: dst) {
    read(obj, idx + 1);
  }
}

void ConnectionContext::read(ByteBuffer* buf) {
  read(buf, 0);
}

bool ConnectionContext::isActive() const {
  return active;
}

void ConnectionContext::createAsync() {
  async_mutex.lock();
  async = (uv_async_t*) malloc(sizeof(uv_async_t));
  uv_async_init(uv_default_loop(), async, [](uv_async_t* handle) {
    if (handle->data) {
      const auto* data = (AsyncData*) handle->data;
      data->async_mutex->lock();

      auto* req = (uv_write_t*) malloc(sizeof(uv_write_t));
      uv_buf_t buffer;
      buffer.base = (char*) data->buffer->data.data();
      buffer.len = data->buffer->data.size();
      uv_write(req, data->stream, &buffer, 1, write_cb);

      data->async_mutex->unlock();
      delete data;
      handle->data = nullptr;
    }
  });
  async_mutex.unlock();
}
