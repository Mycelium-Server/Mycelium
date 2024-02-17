

#include "../../connection_context.h"
#include "handlers.h"

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

  size_t dlen = inbuf->readVarInt();
  if (dlen > 0) {
    libdeflate_decompressor* decompressor = ctx->gameServer->getDecompressor();

    auto* uncompr = (byte_t*) malloc(dlen);
    size_t slen = inbuf->readableBytes();
    std::vector<byte_t> compr = inbuf->readBytes(slen);
    libdeflate_result res = libdeflate_zlib_decompress(decompressor, compr.data(), slen, uncompr, dlen, nullptr);
    if (res != LIBDEFLATE_SUCCESS) {
      std::cout << "Could not decompress buffer: " << res << std::endl;
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