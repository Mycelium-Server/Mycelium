

#include "login_packet_listener.h"

#include <openssl/rand.h>

#include "../daft_hash.h"
#include "../network/pipeline/handlers.h"
#include "../network/protocol/clientbound_change_difficulty.h"
#include "../network/protocol/clientbound_chunk_data.h"
#include "../network/protocol/clientbound_commands.h"
#include "../network/protocol/clientbound_encryption_request.h"
#include "../network/protocol/clientbound_initialize_world_border.h"
#include "../network/protocol/clientbound_keepalive.h"
#include "../network/protocol/clientbound_login.h"
#include "../network/protocol/clientbound_login_disconnect.h"
#include "../network/protocol/clientbound_login_success.h"
#include "../network/protocol/clientbound_player_abilities.h"
#include "../network/protocol/clientbound_plugin_message.h"
#include "../network/protocol/clientbound_set_center_chunk.h"
#include "../network/protocol/clientbound_set_compression.h"
#include "../network/protocol/clientbound_set_default_spawn_position.h"
#include "../network/protocol/clientbound_synchronize_player_position.h"
#include "../network/protocol/clientbound_system_message.h"
#include "../network/protocol/plugin_channels.h"
#include "../registry_codec.h"
#include "../world/level/world.h"
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
    auto* request = new ClientboundEncryptionRequest();
    request->serverID = "";
    request->rsa = ctx->gameServer->getRSAKeyPair();
    RAND_bytes(verifyToken, sizeof(verifyToken));
    request->verifyToken = {(const byte_t *) verifyToken, sizeof(verifyToken)};
    ctx->write(request);
    delete request;
  }
}

void LoginPacketListener::handleEncryptionResponse(ConnectionContext* ctx, ServerboundEncryptionResponse* packet) {
  publicKey = ctx->gameServer->getRSAKeyPair().publicKey;

  if (packet->verifyToken.has_value()) {
    ByteBuffer clientVerifyToken = rsa_decrypt(ctx->gameServer->getRSAKeyPair(), packet->verifyToken.value());
    if (std::memcmp(clientVerifyToken.data.data(), verifyToken, sizeof(verifyToken)) != 0) {
      auto* disconnect = new ClientboundLoginDisconnect;
      disconnect->reason = R"({"text":"Invalid verify token.","color":"red"})";
      ctx->write(disconnect);
      delete disconnect;
      return;
    }
  }

  sharedSecret = rsa_decrypt(ctx->gameServer->getRSAKeyPair(), packet->sharedSecret);
  CipherAES aes = aes_create_cipher(sharedSecret);
  ctx->pipeline->addBefore("packet_splitter", "packet_decrypt", new PacketDecrypt(aes));
  ctx->pipeline->addAfter("packet_prepender", "packet_encrypt", new PacketEncrypt(aes));

  MojangAPI::GameProfile profile = MojangAPI::requestAuth(ctx);
  if (!profile.success) {
    auto* disconnect = new ClientboundLoginDisconnect;
    disconnect->reason = R"({"text":"Couldn't authenticate with Mojang API.","color":"red"})";
    ctx->write(disconnect);
    delete disconnect;
    return;
  }
  ctx->playerData.uuid = profile.id;
  ctx->playerData.gameProfile = profile;

  continueLogin(ctx);
}

std::string LoginPacketListener::createHash() {
  daft_hash hash;
  hash.update(sharedSecret);
  hash.update(publicKey);
  return hash.finalise();
}

static void continueLogin(ConnectionContext* ctx) {
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
  loginSuccess->properties = ctx->playerData.gameProfile.value_or(MojangAPI::GameProfile{}).properties;
  ctx->write(loginSuccess);
  delete loginSuccess;

  ctx->playerEntity = new EntityPlayer();
  ctx->playerData.entity = ctx->playerEntity;
  ctx->playerData.gamemode = Gamemode::CREATIVE;
  ctx->playerEntity->connection = ctx;
  ctx->playerEntity->setLocation({(Dimension*) &m_default_dimensions[OVERWORLD], ctx->gameServer->getSpawnPosition()});// TODO: Save/load location, default spawn location

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

  auto* declareCommands = new ClientboundCommands();
  declareCommands->graph = ctx->gameServer->getCommandGraph();
  declareCommands->root = ctx->gameServer->getRootCommandNode();
  ctx->write(declareCommands);
  delete declareCommands;

  ctx->gameServer->addPlayer(&ctx->playerData);

  World* world = ctx->playerEntity->getLocation().dimension->world;
  auto currentChunk = world->getChunkLocation(ctx->playerEntity->getLocation());
  auto* setCenterChunk = new ClientboundSetCenterChunk();
  setCenterChunk->location = currentChunk;
  ctx->write(setCenterChunk);
  delete setCenterChunk;

#define loadInitialChunks(r)                                                                      \
  for (int x = -r; x <= r; x++) {                                                                  \
    for (int z = -r; z <= r; z++) {                                                                \
      ChunkLocation loc = {world, x + currentChunk.x, z + currentChunk.z};                        \
      if (((PlayPacketListener*) ctx->packetListener)->loadedChunks.insert(loc.getID()).second) { \
        ClientboundChunkData chunkPacket(world->requireChunk(loc));                               \
        ctx->write(&chunkPacket);                                                                 \
      }                                                                                           \
    }                                                                                             \
  }

  loadInitialChunks(1);

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

  int radius = ctx->gameServer->getViewDistance();
  loadInitialChunks(radius);
}