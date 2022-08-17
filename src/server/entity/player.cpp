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

#include "player.h"

#include "../../listeners/play_packet_listener.h"
#include "../dimension.h"

EntityPlayer::EntityPlayer() {
  inventory.bindPlayer(this);
}

EntityPlayer::~EntityPlayer() = default;

int EntityPlayer::getRenderDistance() const {
  return std::min(connection->gameServer->getViewDistance(), (int) connection->clientSettings.viewDistance);
}

PlayerInventory& EntityPlayer::getInventory() {
  return inventory;
}

bool EntityPlayer::isChunkLoaded(Chunk* chunk) const {
  if (connection->state != ConnectionState::PLAY) {
    return false;
  }

  if (chunk->getOwner() != connection->playerEntity->location.dimension->world) {
    return false;
  }

  auto loaded = ((PlayPacketListener*) connection->packetListener)->loadedChunks;
  return std::find(loaded.begin(), loaded.end(), chunk->location.getID()) != loaded.end();
}
