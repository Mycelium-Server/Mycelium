#include "login_packet_listener.h"
#include "play_packet_listener.h"
#include "../time.h"
#include "../protocol/clientbound_login_success.h"
#include "../protocol/clientbound_set_compression.h"
#include "../protocol/clientbound_encryption_request.h"
#include "../protocol/clientbound_login.h"
#include "../protocol/clientbound_plugin_message.h"
#include "../protocol/clientbound_change_difficulty.h"
#include "../protocol/clientbound_player_abilities.h"
#include "../protocol/clientbound_set_held_item.h"
#include "../protocol/clientbound_keepalive.h"
#include "../protocol/clientbound_chunk_data.h"
#include "../protocol/clientbound_set_center_chunk.h"
#include "../protocol/clientbound_initialize_world_border.h"
#include "../protocol/clientbound_set_default_spawn_position.h"
#include "../protocol/clientbound_synchronize_player_position.h"
#include "../protocol/plugin_channels.h"
#include "../pipeline/handlers.h"
#include "../registry_codec.h"
#include "../server/world/world.h"

#include <openssl/rand.h>

using namespace std::chrono_literals;

#define KEEPALIVE_INTERVAL 15s

static void continueLogin(ConnectionContext*);

LoginPacketListener::LoginPacketListener() = default;
LoginPacketListener::~LoginPacketListener() = default;

void LoginPacketListener::handleLoginStart(ConnectionContext* ctx, ServerboundLoginStart* packet) {
    ctx->playerData.name = packet->name;

    if (!ctx->gameServer->isOnlineMode()) {
        auto playerUUID = uuids::uuid_name_generator{{}}("OfflinePlayer: " + packet->name);
        ctx->playerData.uuid = playerUUID;
        continueLogin(ctx);
    } else {
        auto playerUUID = uuids::uuid_name_generator{{}}("OfflinePlayer: " + packet->name);
        ctx->playerData.uuid = playerUUID; // TODO: Mojang API
        auto* request = new ClientboundEncryptionRequest();
        request->serverID = "";
        request->rsa = ctx->gameServer->getRSAKeyPair();
        unsigned char token[4];
        RAND_bytes(token, 4);
        request->verifyToken = { token, 4 };
        ctx->write(request);
        delete request;
    }   
}

void LoginPacketListener::handleEncryptionResponse(ConnectionContext* ctx, ServerboundEncryptionResponse* packet) {
    // TODO: Verify token
    ByteBuffer sharedSecret = rsa_decrypt(ctx->gameServer->getRSAKeyPair(), packet->sharedSecret);
    CipherAES aes = aes_create_cipher(sharedSecret);
    ctx->pipeline->addBefore("packet_splitter", "packet_decrypt", new PacketDecrypt(aes));
    ctx->pipeline->addAfter("packet_prepender", "packet_encrypt", new PacketEncrypt(aes));
    continueLogin(ctx);
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
    ctx->playerEntity->setLocation({ m_default_dimensions[OVERWORLD], { 0, 20, 0 } });

    ctx->state = ConnectionState::PLAY;
    delete ((LoginPacketListener*) ctx->packetListener);
    ctx->packetListener = new PlayPacketListener();

    auto* login = new ClientboundLogin();
    login->entity = ctx->playerEntity;
    login->player = ctx->playerData;
    login->server = ctx->gameServer;
    login->dimensions = m_default_dimensions;
    login->dimension = m_default_dimensions[Dimensions::OVERWORLD];
    login->registryCodec = { default_registry_codec()->data };
    ctx->write(login);
    delete login;

    auto* brandMessage = new ClientboundPluginMessage();
    brandMessage->channel = BRAND_CHANNEL;
    brandMessage->data.writeString("Mycelium");
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

    auto* heldSlot = new ClientboundSetHeldItem();
    heldSlot->slot = 4;
    ctx->write(heldSlot);
    delete heldSlot;

    ctx->gameServer->addPlayer(&ctx->playerData);

    auto* setCenterChunk = new ClientboundSetCenterChunk();
    setCenterChunk->location = World::getChunkLocation(ctx->playerEntity->getLocation().position.toProtocolPosition());
    ctx->write(setCenterChunk);
    delete setCenterChunk;

    World* world = ctx->playerEntity->getLocation().dimension.world;
    auto* chunkPacket = new ClientboundChunkData(nullptr);
    for(const auto& i : world->chunks) {
        Chunk* chunk = i.second;
        chunkPacket->chunk = chunk;
        ctx->write(chunkPacket);
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
    syncPos->location = ctx->playerEntity->getLocation();
    ctx->write(syncPos);
    delete syncPos;

    ctx->keepaliveThread = std::thread([=]() {
        while (ctx->isActive()) {
            ctx->lastKeepalive = currentTimeMillis();
            auto *keepalive = new ClientboundKeepAlive();
            keepalive->id = ctx->lastKeepalive;
            ctx->write(keepalive, true);
            delete keepalive;
            std::this_thread::sleep_for(KEEPALIVE_INTERVAL);
        }
    });
    ctx->keepaliveThread.detach();
}