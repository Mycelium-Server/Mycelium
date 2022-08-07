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

#include "serverbound_use_item_on.h"

#include "../listeners/play_packet_listener.h"

ServerboundUseItemOn::ServerboundUseItemOn() = default;
ServerboundUseItemOn::~ServerboundUseItemOn() = default;

void ServerboundUseItemOn::read(ByteBuffer& buf) {
  hand = (MainHand) buf.readVarInt();
  position = ProtocolPosition(buf.readLong());
  face = (BlockFace) buf.readVarInt();
  cursorX = buf.readFloat();
  cursorY = buf.readFloat();
  cursorZ = buf.readFloat();
  insideBlock = buf.readByte();
  sequence = buf.readVarInt();
}

ServerboundPacket* ServerboundUseItemOn::createInstance() {
  return new ServerboundUseItemOn();
}

int ServerboundUseItemOn::getPacketID() const {
  return 0x31;
}

void ServerboundUseItemOn::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleUseItemOn(ctx, this);
  }
  delete this;
}
