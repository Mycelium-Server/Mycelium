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

#include "serverbound_ping_request.h"

#include "../listeners/status_packet_listener.h"

ServerboundPingRequest::ServerboundPingRequest() = default;
ServerboundPingRequest::~ServerboundPingRequest() = default;

void ServerboundPingRequest::read(ByteBuffer& in) {
  payload = in.readLong();
}

ServerboundPacket* ServerboundPingRequest::createInstance() {
  return new ServerboundPingRequest();
}

int ServerboundPingRequest::getPacketID() const {
  return 0x01;
}

void ServerboundPingRequest::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::STATUS) {
    ((StatusPacketListener*) ctx->packetListener)->handlePingRequest(ctx, this);
  }
  delete this;
}