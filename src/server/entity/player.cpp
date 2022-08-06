#include "player.h"

EntityPlayer::EntityPlayer() = default;
EntityPlayer::~EntityPlayer() = default;

int EntityPlayer::getRenderDistance() const {
  return std::min(connection->gameServer->getViewDistance(), (int) connection->clientSettings.viewDistance);
}
