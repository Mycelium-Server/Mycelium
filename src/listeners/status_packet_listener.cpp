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

#include "status_packet_listener.h"

#include <iostream>

#include "../protocol/clientbound_ping_response.h"
#include "../protocol/clientbound_status_response.h"

StatusPacketListener::StatusPacketListener() = default;
StatusPacketListener::~StatusPacketListener() = default;

void StatusPacketListener::handleStatusRequest(ConnectionContext* ctx, ServerboundStatusRequest*) {
  auto* response = new ClientboundStatusResponse();// TODO: Cache packet
  response->construct(ctx->gameServer);
  ctx->write(response);
  delete response;
}

void StatusPacketListener::handlePingRequest(ConnectionContext* ctx, ServerboundPingRequest* request) {
  auto* response = new ClientboundPingResponse();
  response->payload = request->payload;
  ctx->write(response);
  delete response;
}