#include "play_packet_listener.h"
#include "../protocol/plugin_channels.h"

PlayPacketListener::PlayPacketListener() {

}

PlayPacketListener::~PlayPacketListener() {

}

void PlayPacketListener::handleClientInformation(ConnectionContext* ctx, ServerboundClientInformation* packet) {
    ctx->clientSettings = packet->settings;
}

void PlayPacketListener::handlePluginMessage(ConnectionContext* ctx, ServerboundPluginMessage* packet) {
    if (packet->channel == BRAND_CHANNEL) {
        ctx->clientBrand = packet->data.readString();
    }
}