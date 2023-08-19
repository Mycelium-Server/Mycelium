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

#include "clientbound_status_response.h"

#include <iostream>

ClientboundStatusResponse::ClientboundStatusResponse() = default;

ClientboundStatusResponse::~ClientboundStatusResponse() = default;

void ClientboundStatusResponse::write(ByteBuffer& out) {
  out.writeString(response);
}

int ClientboundStatusResponse::getPacketID() const {
  return 0x00;
}

void ClientboundStatusResponse::construct(GameServer* server) {
  response = R"({"version": {"name": "1.19.1/2","protocol": 760},"players": {"max": )" +
             std::to_string(server->getMaxPlayers()) + ",\"online\": " + std::to_string(server->getOnline()) +
             R"(}, "description": {"text": ")" + server->getMOTD() + R"(" },"previewChat": false})";
}