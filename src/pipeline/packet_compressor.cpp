#include "handlers.h"
#include "../connection_context.h"

#include <zlib.h>
#include <iostream>

PacketCompressor::PacketCompressor() = default;
PacketCompressor::~PacketCompressor() = default;

bool PacketCompressor::encode(ConnectionContext* ctx, void* in, void*& out) {
    auto* inbuf = (ByteBuffer*) in;
    auto* outbuf = new ByteBuffer();

    if (inbuf->readableBytes() < ctx->gameServer->getCompressionThreshold()) {
        outbuf->writeVarInt(0);
        outbuf->writeBytes(*inbuf);
    } else {
        const char* uncompr = (const char*)inbuf->data.data();
        auto slen = (uLong) inbuf->readableBytes();
        uLong dlen = compressBound(slen);
        auto* compr = (unsigned char*) malloc(dlen);
        int res = compress((Bytef*) compr, &dlen, (Bytef*) uncompr, slen);
        if(res == Z_BUF_ERROR || res == Z_MEM_ERROR) {
            std::cerr << "Unable to compress buffer" << std::endl;
            return false;
        }

        outbuf->writeVarInt((int) slen);
        outbuf->writeBytes((const unsigned char*) compr, dlen);

        free(compr);
    }
    
    delete inbuf;
    out = outbuf;

    return true;
}