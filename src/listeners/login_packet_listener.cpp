#include "login_packet_listener.h"
#include "play_packet_listener.h"
#include "../protocol/clientbound_login_success.h"
#include "../protocol/clientbound_set_compression.h"
#include "../protocol/clientbound_encryption_request.h"
#include "../protocol/clientbound_login.h"
#include "../protocol/clientbound_plugin_message.h"
#include "../protocol/plugin_channels.h"
#include "../pipeline/handlers.h"
#include "../registry_codec.h"

#include <openssl/rand.h>

static void continueLogin(ConnectionContext*);

LoginPacketListener::LoginPacketListener() {

}

LoginPacketListener::~LoginPacketListener() {

}

void LoginPacketListener::handleLoginStart(ConnectionContext* ctx, ServerboundLoginStart* packet) {
    ctx->playerData.name = packet->name;

    if (!ctx->gameServer->isOnlineMode()) {
        auto playerUUID = uuids::uuid_name_generator{{}}("OfflinePlayer: " + packet->name);
        ctx->playerData.uuid = playerUUID;
        continueLogin(ctx);
    } else {
        ClientboundEncryptionRequest* request = new ClientboundEncryptionRequest();
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
        ClientboundSetCompression* setCompression = new ClientboundSetCompression();
        setCompression->threshold = ctx->gameServer->getCompressionThreshold();
        ctx->write(setCompression);
        delete setCompression;

        ctx->pipeline->addAfter("packet_splitter", "packet_decompressor", new PacketDecompressor());
        ctx->pipeline->addAfter("packet_encoder", "packet_compressor", new PacketCompressor());
    }

    ClientboundLoginSuccess* loginSuccess = new ClientboundLoginSuccess();
    loginSuccess->name = ctx->playerData.name;
    loginSuccess->uuid = ctx->playerData.uuid;
    ctx->write(loginSuccess);
    delete loginSuccess;

    ctx->playerEntity = new Entity();

    ctx->state = ConnectionState::PLAY;
    ctx->packetListener = new PlayPacketListener();

    ClientboundLogin* login = new ClientboundLogin();
    login->entity = ctx->playerEntity;
    login->player = ctx->playerData;
    login->server = ctx->gameServer;
    login->dimensions = m_default_dimensions;
    login->dimension = m_default_dimensions[Dimensions::OVERWORLD];
    login->registryCodec = { default_registry_codec()->data };
    ctx->write(login);
    delete login;

    ClientboundPluginMessage* brandMessage = new ClientboundPluginMessage();
    brandMessage->channel = BRAND_CHANNEL;
    brandMessage->data.writeString("Mycelium");
    ctx->write(brandMessage);
    delete brandMessage;
}