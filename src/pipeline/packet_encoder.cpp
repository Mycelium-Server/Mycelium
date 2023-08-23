/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

#include <iostream>

#include "../protocol/packet.h"
#include "handlers.h"

PacketEncoder::PacketEncoder() = default;
PacketEncoder::~PacketEncoder() = default;

bool PacketEncoder::encode(ConnectionContext* ctx, void* in, void*& out) {
  auto* dst = new ByteBuffer();
  auto* packet = (ClientboundPacket*) in;

  if (ctx->gameServer->debugPackets()) {
    std::cout << "[Thread " << std::this_thread::get_id() << "] > 0x" << std::hex << packet->getPacketID() << std::dec << std::endl;
  }

  dst->writeVarInt(packet->getPacketID());
  packet->write(*dst);
  out = dst;
  return true;
}