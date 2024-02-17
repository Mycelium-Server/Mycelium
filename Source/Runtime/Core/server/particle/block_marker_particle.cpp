
#include "block_marker_particle.h"

BlockMarkerParticle::BlockMarkerParticle() = default;
BlockMarkerParticle::~BlockMarkerParticle() = default;

void BlockMarkerParticle::writeData(ByteBuffer& buf) {
  buf.writeVarInt(blockState);
}

int BlockMarkerParticle::getParticleID() const {
  return 3;
}
