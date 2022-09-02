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

#include "serverbound_chat_command.h"

#include "../listeners/play_packet_listener.h"

ServerboundChatCommand::ServerboundChatCommand() = default;
ServerboundChatCommand::~ServerboundChatCommand() = default;

void ServerboundChatCommand::read(ByteBuffer& buf) {
  command = buf.readString();
  timestamp = buf.readLong();
  salt = buf.readLong();
  for (int i = 0; i < buf.readVarInt(); i++) {
    SignedCommandArgument argument {};
    argument.argument = buf.readString();
    argument.signature = ByteBuffer(buf.readBytes(buf.readVarInt()));
  }
  signedPreview = buf.readByte();
}

ServerboundPacket* ServerboundChatCommand::createInstance() {
  return new ServerboundChatCommand;
}

int ServerboundChatCommand::getPacketID() const {
  return 0x04;
}

void ServerboundChatCommand::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleChatCommand(ctx, this);
  }
  delete this;
}
