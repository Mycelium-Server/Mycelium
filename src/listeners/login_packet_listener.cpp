#include "login_packet_listener.h"
#include "../protocol/clientbound_login_success.h"
#include "../protocol/clientbound_set_compression.h"
#include "../pipeline/handlers.h"

LoginPacketListener::LoginPacketListener() {

}

LoginPacketListener::~LoginPacketListener() {

}

void LoginPacketListener::handleLoginStart(ConnectionContext* ctx, ServerboundLoginStart* packet) {
    // TODO: Add encryption
    
    if (ctx->gameServer->getCompressionThreshold() > 0) {
        ClientboundSetCompression* setCompression = new ClientboundSetCompression();
        setCompression->threshold = ctx->gameServer->getCompressionThreshold();
        ctx->write(setCompression);
        delete setCompression;

        ctx->pipeline->addAfter("packet_splitter", "packet_decompressor", new PacketDecompressor());
        ctx->pipeline->addAfter("packet_encoder", "packet_compressor", new PacketCompressor());
    }

    auto playerUUID = uuids::uuid_name_generator{{}}("OfflinePlayer: " + packet->name);

    ClientboundLoginSuccess* loginSuccess = new ClientboundLoginSuccess();
    loginSuccess->name = packet->name;
    loginSuccess->uuid = playerUUID;
    ctx->write(loginSuccess);
    delete loginSuccess;
    
}