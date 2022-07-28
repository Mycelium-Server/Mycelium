#include "falling_dust_particle.h"

FallingDustParticle::FallingDustParticle() = default;
FallingDustParticle::~FallingDustParticle() = default;

void FallingDustParticle::writeData(ByteBuffer& buf) {
    buf.writeVarInt(blockState);
}

int FallingDustParticle::getParticleID() const {
    return 24;
}
