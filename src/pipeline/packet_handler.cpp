#include "handlers.h"
#include "../protocol/packet.h"

PacketHandler::PacketHandler() {

}

PacketHandler::~PacketHandler() {

}

void PacketHandler::handle(ConnectionContext* ctx, void* in) {
    ServerboundPacket* packet = (ServerboundPacket*) in;
    packet->handle(ctx);
}

bool PacketHandler::onConnect(ConnectionContext*) {
    return true;
}

bool PacketHandler::onDisconnect(ConnectionContext*) {
    return true;
}