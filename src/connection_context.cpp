/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "connection_context.h"

#include <iostream>

#include "event_loop_factory.h"
#include "server.h"

ConnectionContext::ConnectionContext(Pipeline* pipeline, ConnectionTCP* con)
    : pipeline(pipeline),
      connection(con) {
  eventLoop = EventLoopFactory::next();
}

ConnectionContext::~ConnectionContext() {
  delete pipeline;
  EventLoopFactory::removeOwner(eventLoop);
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
