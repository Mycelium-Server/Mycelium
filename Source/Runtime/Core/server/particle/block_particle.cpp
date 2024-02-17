
#include "block_particle.h"

BlockParticle::BlockParticle() = default;
BlockParticle::~BlockParticle() = default;

void BlockParticle::writeData(ByteBuffer& buf) {
  buf.writeVarInt(blockState);
}

int BlockParticle::getParticleID() const {
  return 2;
}
