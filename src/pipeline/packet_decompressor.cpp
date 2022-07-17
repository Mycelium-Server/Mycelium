#include "handlers.h"

#include <zlib.h>

PacketDecompressor::PacketDecompressor() {

}

PacketDecompressor::~PacketDecompressor() {

}

bool PacketDecompressor::onConnect(ConnectionContext*) {
    return true;
}

bool PacketDecompressor::onDisconnect(ConnectionContext*) {
    return true;
}

bool PacketDecompressor::decode(ConnectionContext* ctx, void* in, std::vector<void*>& dst) {
    ByteBuffer* inbuf = (ByteBuffer*) in;

    uLongf dlen = inbuf->readVarInt();
    if (dlen > 0) {
        unsigned char* uncompr = (unsigned char*)malloc(dlen);
        uLong slen = inbuf->readableBytes();
        unsigned char* compr = inbuf->readBytes(inbuf->readableBytes()).data();
        int res = uncompress((Bytef*) uncompr, &dlen, (Bytef*) compr, slen);

        dst.push_back(new ByteBuffer(uncompr, dlen));
        free(uncompr);
    } else {
        dst.push_back(new ByteBuffer(inbuf->readBytes(inbuf->readableBytes())));
    }

    delete inbuf;

    return true;
}