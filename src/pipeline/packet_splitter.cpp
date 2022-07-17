#include "handlers.h"

PacketSplitter::PacketSplitter() {

}

PacketSplitter::~PacketSplitter() {
    
}

bool PacketSplitter::onConnect(ConnectionContext*) {
    return true;
}

bool PacketSplitter::onDisconnect(ConnectionContext*) {
    return true;
}

bool PacketSplitter::decode(ConnectionContext* ctx, void* in, std::vector<void*>& out) {
    ByteBuffer* inbuf = (ByteBuffer*) in;

    while (inbuf->readableBytes() > 0) {
        if (!buf) {
            buf = new ByteBuffer();
            remaining = inbuf->readVarInt();
        }
        int toWrite = std::min(remaining, (int) inbuf->readableBytes());
        buf->writeBytes(*inbuf, toWrite);
        remaining -= toWrite;
        if (remaining == 0) {
            out.push_back(buf);
            buf = nullptr;
        }
    }

    delete inbuf;

    return true;
}