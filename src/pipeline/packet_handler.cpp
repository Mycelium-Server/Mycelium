#include "../listeners/login_packet_listener.h"
#include "../listeners/play_packet_listener.h"
#include "../listeners/status_packet_listener.h"
#include "../protocol/clientbound_system_message.h"
#include "../protocol/packet.h"
#include "handlers.h"

PacketHandler::PacketHandler() = default;
PacketHandler::~PacketHandler() = default;

void PacketHandler::handle(ConnectionContext* ctx, void* in) {
  auto* packet = (ServerboundPacket*) in;
  packet->handle(ctx);
}

bool PacketHandler::onConnect(ConnectionContext* ctx) {
  ctx->active = true;
  return true;
}

bool PacketHandler::onDisconnect(ConnectionContext* ctx) {
  ctx->active = false;
  ctx->gameServer->removePlayer(&ctx->playerData);
  delete ctx->playerEntity;
  if (ctx->state == ConnectionState::STATUS) {
    delete ((StatusPacketListener*) ctx->packetListener);
  } else if (ctx->state == ConnectionState::LOGIN) {
    delete ((LoginPacketListener*) ctx->packetListener);
  } else if (ctx->state == ConnectionState::PLAY) {
    std::string message = ctx->playerData.name + " left the game";
    std::cout << message << std::endl;
    auto* chatPacket = new ClientboundSystemMessage;
    chatPacket->message = R"({"text":")" + message + R"(","color":"light_purple"})";
    for (auto& player : ctx->gameServer->getPlayers()) {
      player->entity->connection->write(chatPacket);
    }
    delete chatPacket;
    delete ((PlayPacketListener*) ctx->packetListener);
  }
  return false;
}