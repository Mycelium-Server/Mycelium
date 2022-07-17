#include "login_packet_listener.h"
#include "../protocol/clientbound_login_success.h"

LoginPacketListener::LoginPacketListener() {

}

LoginPacketListener::~LoginPacketListener() {

}

void LoginPacketListener::handleLoginStart(ConnectionContext* ctx, ServerboundLoginStart* packet) {
    // TODO: Add encryption
    // TODO: Add compression

    auto playerUUID = uuids::uuid_name_generator{{}}("OfflinePlayer: " + packet->name);

    ClientboundLoginSuccess* loginSuccess = new ClientboundLoginSuccess();
    loginSuccess->name = packet->name;
    loginSuccess->uuid = playerUUID;
    ctx->write(loginSuccess);
    delete loginSuccess;
    
}