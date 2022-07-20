#include "handlers.h"
#include "../protocol/packet.h"

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
    return true;
}