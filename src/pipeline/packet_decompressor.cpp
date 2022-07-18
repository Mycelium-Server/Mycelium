#include "handlers.h"

#include <zlib.h>

PacketDecompressor::PacketDecompressor() = default;
PacketDecompressor::~PacketDecompressor() = default;

bool PacketDecompressor::onConnect(ConnectionContext*) {
    return true;
}

bool PacketDecompressor::onDisconnect(ConnectionContext*) {
    return true;
}

bool PacketDecompressor::decode(ConnectionContext* ctx, void* in, std::vector<void*>& dst) {
    auto* inbuf = (ByteBuffer*) in;

    uLongf dlen = inbuf->readVarInt();
    if (dlen > 0) {
        auto* uncompr = (unsigned char*)malloc(dlen);
        uLong slen = inbuf->readableBytes();
        std::vector<unsigned char> compr = inbuf->readBytes(inbuf->readableBytes());
        int res = uncompress((Bytef*) uncompr, &dlen, (Bytef*) compr.data(), slen);
        if (res == Z_BUF_ERROR || res == Z_MEM_ERROR) {
            std::cout << "Could not uncompress message" << std::endl;
            return false;
        }

        dst.push_back(new ByteBuffer(uncompr, dlen));
        free(uncompr);
    } else {
        dst.push_back(new ByteBuffer(inbuf->readBytes(inbuf->readableBytes())));
    }

    delete inbuf;

    return true;
}