
#include "dust_particle.h"

DustParticle::DustParticle() = default;
DustParticle::~DustParticle() = default;

void DustParticle::writeData(ByteBuffer& buf) {
  buf.writeFloat(red);
  buf.writeFloat(green);
  buf.writeFloat(blue);
  buf.writeFloat(scale);
}

int DustParticle::getParticleID() const {
  return 14;
}
