#include "connection_context.h"
#include "server.h"

#include <iostream>

ConnectionContext::ConnectionContext(Pipeline* pipeline, ConnectionTCP* con)
    : pipeline(pipeline),
      connection(con) {
  eventLoop = new EventLoop; // TODO: Event loop factory
}

ConnectionContext::~ConnectionContext() {
  delete pipeline;
  eventLoop->destroy();
}

void ConnectionContext::write(void* object) {
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

  connection->write(buf);
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
