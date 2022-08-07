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

#include "serverbound_chat_message.h"

#include "../listeners/play_packet_listener.h"

ServerboundChatMessage::ServerboundChatMessage() = default;
ServerboundChatMessage::~ServerboundChatMessage() = default;

void ServerboundChatMessage::read(ByteBuffer& buf) {
  message = buf.readString();
  cryptography.timestamp = buf.readLong();
  cryptography.salt = buf.readLong();
  cryptography.signature = ByteBuffer(buf.readBytes(buf.readVarInt()));
  signedPreview = buf.readByte();
}

ServerboundPacket* ServerboundChatMessage::createInstance() {
  return new ServerboundChatMessage();
}

int ServerboundChatMessage::getPacketID() const {
  return 0x05;
}

void ServerboundChatMessage::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleChatMessage(ctx, this);
  }
  delete this;
}
