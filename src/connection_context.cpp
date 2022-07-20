#include "connection_context.h"
#include <iostream>

struct AsyncData {
    AsyncData(ByteBuffer* buffer, uv_stream_t* stream)
            : buffer(buffer), stream(stream) {}

    ByteBuffer* buffer;
    uv_stream_t* stream;
};

ConnectionContext::ConnectionContext(Pipeline* pipeline, uv_stream_t* stream)
    : pipeline(pipeline), stream(stream) {}

ConnectionContext::~ConnectionContext() {
    delete pipeline;
}

void write_cb(uv_write_t* req, int status) {
    if(status) {
        std::cout << "Unable to write data: " << uv_strerror(status);
        return;
    }
    free(req);
}

void ConnectionContext::write(void* object, bool isAsync) {
    void* src = (void*)object;
    void* dst;
    pipeline->forEach([&](AbstractHandler* handler, int) {
        if(handler->isOutboundHandler()) {
            bool res = ((OutboundHandler*)handler)->encode(this, src, dst);
            src = dst;
            return res;
        }
        return true;
    });

    if(!src) return;
    auto* buf = (ByteBuffer*) src;

    if(!isAsync) {
        uv_buf_t buffer;
        buffer.base = (char*)buf->data.data();
        buffer.len = buf->data.size();
        auto* req = (uv_write_t*)malloc(sizeof(uv_write_t));
        uv_write(req, stream, &buffer, 1, write_cb);
        delete buf;
    } else {

        auto* async = (uv_async_t*) malloc(sizeof(uv_async_t));
        async->data = new AsyncData(buf, stream);

        uv_async_init(uv_default_loop(), async, [](uv_async_t* handle) {
            auto* req = (uv_write_t*) malloc(sizeof(uv_write_t));
            auto* data = (AsyncData*) handle->data;
            uv_buf_t buffer;
            buffer.base = (char*) data->buffer->data.data();
            buffer.len = data->buffer->data.size();
            uv_write(req, data->stream, &buffer, 1, write_cb);
            delete data->buffer;
            delete data;
        });

        uv_async_send(async);
    }

}

void ConnectionContext::read(void* src, int idx) {
    if (idx >= pipeline->handlers().size()) return;
    AbstractHandler* handler = pipeline->get(idx);
    if (!handler->isInboundHandler()) {
        read(src, idx + 1);
        return;
    }

    std::vector<void*> dst;
    auto* inbound = (InboundHandler*) handler;
    if (!inbound->decode(this, src, dst)) return;
    for (void*& obj : dst) {
        read(obj, idx + 1);
    }
}

void ConnectionContext::read(ByteBuffer* buf) {
    read(buf, 0);
}

bool ConnectionContext::isActive() const {
    return active;
}
