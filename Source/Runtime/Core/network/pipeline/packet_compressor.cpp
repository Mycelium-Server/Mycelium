

#include <iostream>

#include "../../connection_context.h"
#include "handlers.h"

PacketCompressor::PacketCompressor() = default;
PacketCompressor::~PacketCompressor() = default;

bool PacketCompressor::encode(ConnectionContext* ctx, void* in, void*& out) {
  auto* inbuf = (ByteBuffer*) in;
  auto* outbuf = new ByteBuffer();

  if (inbuf->readableBytes() < ctx->gameServer->getCompressionThreshold()) {
    outbuf->writeVarInt(0);
    outbuf->writeBytes(*inbuf);
  } else {
    libdeflate_compressor* compressor = ctx->gameServer->getCompressor();

    const char* uncompr = (const char*) inbuf->data.data();
    auto slen = (size_t) inbuf->readableBytes();
    size_t dlen = libdeflate_deflate_compress_bound(compressor, slen);

    auto* compr = (uint8_t*) malloc(dlen);
    dlen = libdeflate_zlib_compress(compressor, uncompr, slen, compr, dlen);
    if (dlen <= 0) {
      std::cerr << "Couldn't compress buffer" << std::endl;
      return false;
    }

    outbuf->writeVarInt((int) slen);
    outbuf->writeBytes((const byte_t *) compr, dlen);

    free(compr);
  }

  delete inbuf;
  out = outbuf;

  return true;
}