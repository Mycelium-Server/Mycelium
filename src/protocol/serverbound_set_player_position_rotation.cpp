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

#include "serverbound_set_player_position_rotation.h"

#include "../listeners/play_packet_listener.h"

ServerboundSetPlayerPositionRotation::ServerboundSetPlayerPositionRotation() = default;
ServerboundSetPlayerPositionRotation::~ServerboundSetPlayerPositionRotation() = default;

void ServerboundSetPlayerPositionRotation::read(ByteBuffer& buf) {
  location.position.x = buf.readDouble();
  location.position.y = buf.readDouble();
  location.position.z = buf.readDouble();
  location.yaw = buf.readFloat();
  location.pitch = buf.readFloat();
  onGround = buf.readByte();
}

ServerboundPacket* ServerboundSetPlayerPositionRotation::createInstance() {
  return new ServerboundSetPlayerPositionRotation();
}

int ServerboundSetPlayerPositionRotation::getPacketID() const {
  return 0x15;
}

void ServerboundSetPlayerPositionRotation::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetPlayerPositionRotation(ctx, this);
  }
  delete this;
}
