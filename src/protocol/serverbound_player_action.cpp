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

#include "serverbound_player_action.h"

#include "../listeners/play_packet_listener.h"

ServerboundPlayerAction::ServerboundPlayerAction() = default;
ServerboundPlayerAction::~ServerboundPlayerAction() = default;

void ServerboundPlayerAction::read(ByteBuffer& buf) {
  status = (decltype(status)) buf.readVarInt();
  location = buf.readBlockPosition();
  face = (BlockFace) buf.readByte();
  sequence = buf.readVarInt();
}

ServerboundPacket* ServerboundPlayerAction::createInstance() {
  return new ServerboundPlayerAction;
}

int ServerboundPlayerAction::getPacketID() const {
  return 0x1D;
}

void ServerboundPlayerAction::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handlePlayerAction(ctx, this);
  }
  delete this;
}
