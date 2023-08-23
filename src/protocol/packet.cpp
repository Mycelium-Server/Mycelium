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

#include "packet.h"

#include <map>

#include "serverbound_confirm_teleportation.h"
#include "serverbound_encryption_response.h"
#include "serverbound_login_start.h"
#include "serverbound_ping_request.h"
#include "serverbound_status_request.h"

static std::map<int, ServerboundPacket*> registered;

ServerboundPacket::ServerboundPacket() = default;

void ServerboundPacket::registerPacket() {
  registered[getPacketID()] = createInstance();
}

ServerboundPacket* ServerboundPacket::createInstanceFromID(int id, ConnectionState state) {
  if (id == 0) {
    if (state == ConnectionState::STATUS) {
      return new ServerboundStatusRequest();
    } else if (state == ConnectionState::LOGIN) {
      return new ServerboundLoginStart();
    } else if (state == ConnectionState::PLAY) {
      return new ServerboundConfirmTeleportation();
    }
  } else if (id == 1) {
    if (state == ConnectionState::STATUS) {
      return new ServerboundPingRequest();
    } else if (state == ConnectionState::LOGIN) {
      return new ServerboundEncryptionResponse();
    }
  }
  ServerboundPacket* packet = registered[id];
  if (!packet)
    return nullptr;
  return packet->createInstance();
}

ClientboundPacket::ClientboundPacket() = default;