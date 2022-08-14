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

#include "login_packet_listener.h"

#include <openssl/rand.h>

#include "../daft_hash.h"
#include "../mojangapi/auth_request.h"
#include "../pipeline/handlers.h"
#include "../protocol/clientbound_change_difficulty.h"
#include "../protocol/clientbound_chunk_data.h"
#include "../protocol/clientbound_encryption_request.h"
#include "../protocol/clientbound_initialize_world_border.h"
#include "../protocol/clientbound_keepalive.h"
#include "../protocol/clientbound_login.h"
#include "../protocol/clientbound_login_disconnect.h"
#include "../protocol/clientbound_login_success.h"
#include "../protocol/clientbound_player_abilities.h"
#include "../protocol/clientbound_plugin_message.h"
#include "../protocol/clientbound_set_center_chunk.h"
#include "../protocol/clientbound_set_compression.h"
#include "../protocol/clientbound_set_default_spawn_position.h"
#include "../protocol/clientbound_synchronize_player_position.h"
#include "../protocol/clientbound_system_message.h"
#include "../protocol/plugin_channels.h"
#include "../registry_codec.h"
#include "../server/world/world.h"
#include "../time.h"
#include "play_packet_listener.h"

using namespace std::chrono_literals;

#define KEEPALIVE_INTERVAL 15s

static void continueLogin(ConnectionContext*);

LoginPacketListener::LoginPacketListener() = default;
LoginPacketListener::~LoginPacketListener() = default;

void LoginPacketListener::handleLoginStart(ConnectionContext* ctx, ServerboundLoginStart* packet) {
  if (ctx->protocolVersion != 760) {
    auto* disconnect = new ClientboundLoginDisconnect();
    disconnect->reason = R"({"text":"Outdated client!","color":"red"})";
    ctx->write(disconnect);
    delete disconnect;
    return;
  }

  for (auto& player: ctx->gameServer->getPlayers()) {
    if (player->name == packet->name) {
      auto* disconnect = new ClientboundLoginDisconnect();
      disconnect->reason = R"({"text":"Player with that name is already playing on this server","color":"red"})";
      ctx->write(disconnect);
      delete disconnect;
      return;
    }
  }

  ctx->playerData.name = packet->name;

  if (!ctx->gameServer->isOnlineMode()) {
    auto playerUUID = uuids::uuid_name_generator {{}}("OfflinePlayer:" + packet->name);
    ctx->playerData.uuid = playerUUID;
    continueLogin(ctx);
  } else {
    auto playerUUID = uuids::uuid_name_generator {{}}("OfflinePlayer:" + packet->name);
    ctx->playerData.uuid = playerUUID;// TODO: Mojang API
    auto* request = new ClientboundEncryptionRequest();
    request->serverID = "";
    request->rsa = ctx->gameServer->getRSAKeyPair();
    unsigned char token[4];
    RAND_bytes(token, 4);
    request->verifyToken = {token, 4};
    ctx->write(request);
    delete request;
  }
}

void LoginPacketListener::handleEncryptionResponse(ConnectionContext* ctx, ServerboundEncryptionResponse* packet) {
  // TODO: Verify token
  publicKey = ctx->gameServer->getRSAKeyPair().publicKey;
  sharedSecret = rsa_decrypt(ctx->gameServer->getRSAKeyPair(), packet->sharedSecret);
  CipherAES aes = aes_create_cipher(sharedSecret);
  ctx->pipeline->addBefore("packet_splitter", "packet_decrypt", new PacketDecrypt(aes));
  ctx->pipeline->addAfter("packet_prepender", "packet_encrypt", new PacketEncrypt(aes));

  // TODO: this
  //    MojangAPI::AuthResponse auth = MojangAPI::requestAuth(ctx);
  //    std::cout << auth.success << std::endl;

  continueLogin(ctx);
}

std::string LoginPacketListener::createHash() {
  daft_hash_impl hash;
  hash.update(sharedSecret);
  hash.update(publicKey);
  return hash.finalise();
}

void continueLogin(ConnectionContext* ctx) {
  if (ctx->gameServer->getCompressionThreshold() > 0) {
    auto* setCompression = new ClientboundSetCompression();
    setCompression->threshold = ctx->gameServer->getCompressionThreshold();
    ctx->write(setCompression);
    delete setCompression;

    ctx->pipeline->addAfter("packet_splitter", "packet_decompressor", new PacketDecompressor());
    ctx->pipeline->addAfter("packet_encoder", "packet_compressor", new PacketCompressor());
  }

  auto* loginSuccess = new ClientboundLoginSuccess();
  loginSuccess->name = ctx->playerData.name;
  loginSuccess->uuid = ctx->playerData.uuid;
  ctx->write(loginSuccess);
  delete loginSuccess;

  ctx->playerEntity = new EntityPlayer();
  ctx->playerData.entity = ctx->playerEntity;
  ctx->playerData.gamemode = Gamemode::CREATIVE;
  ctx->playerEntity->connection = ctx;
  ctx->playerEntity->setLocation({m_default_dimensions[OVERWORLD], {256, 20, 256}});// TODO: Save/load location, default spawn location

  ctx->state = ConnectionState::PLAY;
  delete ((LoginPacketListener*) ctx->packetListener);
  ctx->packetListener = new PlayPacketListener();

  auto* login = new ClientboundLogin();
  login->entity = ctx->playerEntity;
  login->player = ctx->playerData;
  login->server = ctx->gameServer;
  login->dimensions = m_default_dimensions;
  login->dimension = m_default_dimensions[Dimensions::OVERWORLD];
  login->registryCodec = ByteBuffer(default_registry_codec()->data);
  ctx->write(login);
  delete login;

  auto* brandMessage = new ClientboundPluginMessage();
  brandMessage->channel = BRAND_CHANNEL;
  brandMessage->data.writeString("Mycelium");// TODO: ctx->gameServer->getBrand();
  ctx->write(brandMessage);
  delete brandMessage;

  auto* difficulty = new ClientboundChangeDifficulty();
  difficulty->difficulty = ctx->gameServer->getDifficulty();
  difficulty->isLocked = true;
  ctx->write(difficulty);
  delete difficulty;

  auto* abilities = new ClientboundPlayerAbilities();
  abilities->construct(ctx->playerData);
  ctx->write(abilities);
  delete abilities;

  ctx->playerEntity->getInventory().setActiveSlot(0);

  ctx->gameServer->addPlayer(&ctx->playerData);

  auto currentChunk = World::getChunkLocation(ctx->playerEntity->getLocation().position.position);
  auto* setCenterChunk = new ClientboundSetCenterChunk();
  setCenterChunk->location = currentChunk;
  ctx->write(setCenterChunk);
  delete setCenterChunk;

  World* world = ctx->playerEntity->getLocation().dimension.world;
  auto* chunkPacket = new ClientboundChunkData(nullptr);
  for (int x = -1; x <= 1; x++) {
    for (int z = -1; z <= 1; z++) {
      ChunkLocation loc = {x + currentChunk.x, z + currentChunk.z};
      chunkPacket->chunk = world->requireChunk(loc);
      ctx->write(chunkPacket);
      unsigned long long id = (unsigned long long) loc.x << 32 | (unsigned) loc.z;
      ((PlayPacketListener*) ctx->packetListener)->loadedChunks.push_back(id);
    }
  }
  delete chunkPacket;

  auto* worldBorder = new ClientboundInitializeWorldBorder();
  worldBorder->old = ctx->gameServer->getWorldBorder();
  worldBorder->newBorder = ctx->gameServer->getWorldBorder();
  ctx->write(worldBorder);
  delete worldBorder;

  auto* spawnPosition = new ClientboundSetDefaultSpawnPosition();
  spawnPosition->position = ctx->gameServer->getSpawnPosition();
  ctx->write(spawnPosition);
  delete spawnPosition;

  auto* syncPos = new ClientboundSynchronizePlayerPosition();
  syncPos->teleportId = 0x7FFF;
  ((PlayPacketListener*) ctx->packetListener)->setTeleportID(syncPos->teleportId);
  syncPos->location = ctx->playerEntity->getLocation();
  ctx->write(syncPos);
  delete syncPos;

  ctx->keepaliveThread = std::thread([=]() {
    while (ctx->isActive()) {
      ctx->lastKeepalive = currentTimeMillis();
      auto* keepalive = new ClientboundKeepAlive();
      keepalive->id = ctx->lastKeepalive;
      ctx->write(keepalive);
      delete keepalive;
      std::this_thread::sleep_for(KEEPALIVE_INTERVAL);
    }
  });
  ctx->keepaliveThread.detach();

  {
    std::string message = ctx->playerData.name + " joined the game";
    std::cout << message << std::endl;
    auto* chatPacket = new ClientboundSystemMessage;
    chatPacket->message = R"({"text":")" + message + R"(","color":"aqua"})";
    for (auto& player: ctx->gameServer->getPlayers()) {
      player->entity->connection->write(chatPacket);
    }
    delete chatPacket;
  }
}