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