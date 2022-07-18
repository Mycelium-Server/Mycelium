#include "play_packet_listener.h"

PlayPacketListener::PlayPacketListener() {

}

PlayPacketListener::~PlayPacketListener() {

}

void PlayPacketListener::handleClientInformation(ConnectionContext* ctx, ServerboundClientInformation* packet) {
    ctx->clientSettings = packet->settings;
}