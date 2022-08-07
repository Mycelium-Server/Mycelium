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

#include "serverbound_encryption_response.h"

#include "../listeners/login_packet_listener.h"

ServerboundEncryptionResponse::ServerboundEncryptionResponse() = default;
ServerboundEncryptionResponse::~ServerboundEncryptionResponse() = default;

void ServerboundEncryptionResponse::read(ByteBuffer& buf) {
  sharedSecret = ByteBuffer(buf.readBytes(buf.readVarInt()));
  if (buf.readByte()) {
    verifyToken = ByteBuffer(buf.readBytes(buf.readVarInt()));
  } else {
    Cryptography c;
    c.salt = buf.readLong();
    c.messageSignature = ByteBuffer(buf.readBytes(buf.readVarInt()));
  }
}

ServerboundPacket* ServerboundEncryptionResponse::createInstance() {
  return new ServerboundEncryptionResponse();
}

int ServerboundEncryptionResponse::getPacketID() const {
  return 0x01;
}

void ServerboundEncryptionResponse::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::LOGIN) {
    ((LoginPacketListener*) ctx->packetListener)->handleEncryptionResponse(ctx, this);
  }
  delete this;
}