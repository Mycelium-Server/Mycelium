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
#include "../protocol/plugin_channels.h"
#include "../pipeline/handlers.h"
#include "../registry_codec.h"

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
    ctx->playerEntity->connection = ctx;

    ctx->state = ConnectionState::PLAY;
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