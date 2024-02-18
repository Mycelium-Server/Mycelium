

#include "serverbound_keepalive.h"

#include "../game/clientbound_player_info.h"

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