#include "handlers.h"

PacketPrepender::PacketPrepender() {

}

PacketPrepender::~PacketPrepender() {

}

bool PacketPrepender::encode(ConnectionContext* ctx, void* in, void*& out) {
    ByteBuffer* inbuf = (ByteBuffer*) in;
    ByteBuffer* outbuf = new ByteBuffer();

    outbuf->writeVarInt((int) inbuf->readableBytes());
    outbuf->writeBytes(*inbuf);

    delete inbuf;

    out = outbuf;
    return true;
}