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

#include "serverbound_plugin_message.h"

#include "../listeners/play_packet_listener.h"

ServerboundPluginMessage::ServerboundPluginMessage() = default;
ServerboundPluginMessage::~ServerboundPluginMessage() = default;

void ServerboundPluginMessage::read(ByteBuffer& buf) {
  channel = buf.readString();
  data = ByteBuffer(buf.readBytes(buf.readableBytes()));
}

ServerboundPacket* ServerboundPluginMessage::createInstance() {
  return new ServerboundPluginMessage();
}

int ServerboundPluginMessage::getPacketID() const {
  return 0x0D;
}

void ServerboundPluginMessage::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handlePluginMessage(ctx, this);
  }
  delete this;
}