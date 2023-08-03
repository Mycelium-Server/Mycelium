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

#include "serverbound_keepalive.h"

#include "clientbound_player_info.h"

ServerboundKeepAlive::ServerboundKeepAlive() = default;
ServerboundKeepAlive::~ServerboundKeepAlive() = default;

void ServerboundKeepAlive::read(ByteBuffer& src) {
  id = src.readLong();
}

ServerboundPacket* ServerboundKeepAlive::createInstance() {
  return new ServerboundKeepAlive();
}

int ServerboundKeepAlive::getPacketID() const {
  return 0x12;
}


void ServerboundKeepAlive::handle(ConnectionContext* ctx) {
  int64_t diff = ctx->lastKeepalive - id;
  auto* updLatency = new ClientboundPlayerInfo();
  updLatency->playerActions.push_back(new ClientboundPlayerInfo::UpdatePlayerLatency(ctx->playerData.uuid, (int) diff));
  for (auto& player: ctx->gameServer->getPlayers()) {
    player->entity->connection->write(updLatency);
  }
  delete updLatency;
  delete this;
}