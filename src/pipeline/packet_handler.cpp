#include "handlers.h"
#include "../protocol/packet.h"

PacketHandler::PacketHandler() = default;
PacketHandler::~PacketHandler() = default;

void PacketHandler::handle(ConnectionContext* ctx, void* in) {
    auto* packet = (ServerboundPacket*) in;
    packet->handle(ctx);
}

bool PacketHandler::onConnect(ConnectionContext*) {
    return true;
}

bool PacketHandler::onDisconnect(ConnectionContext*) {
    return true;
}