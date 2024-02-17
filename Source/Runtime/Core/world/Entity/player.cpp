
#include "player.h"

#include "../../listeners/play_packet_listener.h"
#include "../../server/dimension.h"
#include "metadata/player_metadata.h"

EntityPlayer::EntityPlayer()
  : Entity(new PlayerMetadata) {
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
