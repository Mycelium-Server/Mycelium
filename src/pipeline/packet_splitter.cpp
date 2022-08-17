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

#include "handlers.h"

PacketSplitter::PacketSplitter() = default;
PacketSplitter::~PacketSplitter() {
  delete buf;
}

bool PacketSplitter::onConnect(ConnectionContext*) {
  return true;
}

bool PacketSplitter::onDisconnect(ConnectionContext*) {
  return true;
}

bool PacketSplitter::decode(ConnectionContext* ctx, void* in, std::vector<void*>& out) {
  auto* inbuf = (ByteBuffer*) in;

  while (inbuf->readableBytes() > 0) {
    if (!buf) {
      buf = new ByteBuffer();
      remaining = inbuf->readVarInt();
    }
    int toWrite = std::min(remaining, (int) inbuf->readableBytes());
    buf->writeBytes(*inbuf, toWrite);
    remaining -= toWrite;
    if (remaining == 0) {
      out.push_back(buf);
      buf = nullptr;
    }
  }

  delete inbuf;

  return true;
}