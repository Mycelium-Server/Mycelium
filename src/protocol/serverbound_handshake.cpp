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

#include "serverbound_handshake.h"

#include "../listeners/login_packet_listener.h"
#include "../listeners/status_packet_listener.h"

ServerboundHandshake::ServerboundHandshake() {
}

ServerboundHandshake::~ServerboundHandshake() = default;

void ServerboundHandshake::read(ByteBuffer& in) {
  protocolVersion = in.readVarInt();
  serverAddress = in.readString();
  serverPort = (uint16_t) in.readShort();
  nextState = (NextState) in.readVarInt();
}

ServerboundPacket* ServerboundHandshake::createInstance() {
  return new ServerboundHandshake();
}

int ServerboundHandshake::getPacketID() const {
  return 0x00;
}

void ServerboundHandshake::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::NONE) {
    ctx->protocolVersion = protocolVersion;
    if (nextState == ServerboundHandshake::STATUS) {
      ctx->packetListener = new StatusPacketListener();
      ctx->state = ConnectionState::STATUS;
    } else if (nextState == ServerboundHandshake::LOGIN) {
      ctx->packetListener = new LoginPacketListener();
      ctx->state = ConnectionState::LOGIN;
    }
  }
  delete this;
}