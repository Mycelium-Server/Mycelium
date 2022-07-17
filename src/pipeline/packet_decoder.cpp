#include "handlers.h"
#include "../protocol/packet.h"
#include <iostream>

PacketDecoder::PacketDecoder() {

}

PacketDecoder::~PacketDecoder() {

}

bool PacketDecoder::onConnect(ConnectionContext*) {
    return true;
}

bool PacketDecoder::onDisconnect(ConnectionContext*) {
    return true;
}

bool PacketDecoder::decode(ConnectionContext* ctx, void* in, std::vector<void*>& out) {
    ByteBuffer* inbuf = (ByteBuffer*) in;
    
    int packetId = inbuf->readVarInt();
    
    ServerboundPacket* packet = ServerboundPacket::createInstanceFromID(packetId, ctx->state);
    packet->read(*inbuf);
    out.push_back(packet);

    delete inbuf;

    return true;
}