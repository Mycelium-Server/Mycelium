

#include "clientbound_unload_chunk.h"

ClientboundUnloadChunk::ClientboundUnloadChunk() = default;
ClientboundUnloadChunk::~ClientboundUnloadChunk() = default;

void ClientboundUnloadChunk::write(ByteBuffer& out) {
  out.writeInt(location.x);
  out.writeInt(location.z);
}

int ClientboundUnloadChunk::getPacketID() const {
  return 0x1C;
}