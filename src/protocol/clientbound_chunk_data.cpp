#include "clientbound_chunk_data.h"

ClientboundChunkData::ClientboundChunkData(Chunk* chunk)
    : chunk(chunk) {}
ClientboundChunkData::~ClientboundChunkData() = default;

void ClientboundChunkData::write(ByteBuffer& out) {
  chunk->write(out);
}

int ClientboundChunkData::getPacketID() const {
  return 0x21;
}