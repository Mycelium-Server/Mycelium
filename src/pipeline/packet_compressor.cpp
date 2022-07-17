#include "handlers.h"
#include "../connection_context.h"

#include <zlib.h>
#include <iostream>

PacketCompressor::PacketCompressor() {

}

PacketCompressor::~PacketCompressor() {

}

bool PacketCompressor::encode(ConnectionContext* ctx, void* in, void*& out) {
    ByteBuffer* inbuf = (ByteBuffer*) in;
    ByteBuffer* outbuf = new ByteBuffer();

    if (inbuf->readableBytes() < ctx->gameServer->getCompressionThreshold()) {
        outbuf->writeVarInt(0);
        outbuf->writeBytes(*inbuf);
    } else {
        ByteBuffer* outbuf = new ByteBuffer();
        const char* uncompr = (const char*)inbuf->data.data();
        long long slen = inbuf->readableBytes();
        uLong dlen = compressBound(slen);
        unsigned char* compr = (unsigned char*)malloc(dlen);
        int res = compress((Bytef*) compr, &dlen, (Bytef*) uncompr, (uLong) slen);
        if(res == Z_BUF_ERROR || res == Z_MEM_ERROR) {
            std::cerr << "Unable to compress buffer" << std::endl;
            return false;
        }

        outbuf->writeVarInt(slen);
        outbuf->writeBytes((const unsigned char*) compr, dlen);

        free(compr);
    }
    
    delete inbuf;
    out = outbuf;

    return true;
}