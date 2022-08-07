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

#include "serverbound_login_start.h"

#include "../listeners/login_packet_listener.h"

ServerboundLoginStart::ServerboundLoginStart() = default;
ServerboundLoginStart::~ServerboundLoginStart() = default;

void ServerboundLoginStart::read(ByteBuffer& in) {
  name = in.readString();
  if (in.readByte()) {
    SigData data;
    data.timestamp = in.readLong();
    data.publicKey = ByteBuffer(in.readBytes(in.readVarInt()));
    data.signature = ByteBuffer(in.readBytes(in.readVarInt()));
    sigdata = {data};
  }
}

ServerboundPacket* ServerboundLoginStart::createInstance() {
  return new ServerboundLoginStart();
}

int ServerboundLoginStart::getPacketID() const {
  return 0x00;
}

void ServerboundLoginStart::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::LOGIN) {
    ((LoginPacketListener*) ctx->packetListener)->handleLoginStart(ctx, this);
  }
  delete this;
}