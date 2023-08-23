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

#include "clientbound_system_message.h"

ClientboundSystemMessage::ClientboundSystemMessage() = default;
ClientboundSystemMessage::~ClientboundSystemMessage() = default;

void ClientboundSystemMessage::write(ByteBuffer& buf) {
  buf.writeString(message);
  buf.writeVarInt((int) type);
}

int ClientboundSystemMessage::getPacketID() const {
  return 0x62;
}
