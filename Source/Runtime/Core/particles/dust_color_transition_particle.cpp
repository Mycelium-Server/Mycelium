
#include "dust_color_transition_particle.h"

DustColorTransitionParticle::DustColorTransitionParticle() = default;
DustColorTransitionParticle::~DustColorTransitionParticle() = default;

void DustColorTransitionParticle::writeData(ByteBuffer& buf) {
  buf.writeFloat(red);
  buf.writeFloat(green);
  buf.writeFloat(blue);
  buf.writeFloat(scale);
  buf.writeFloat(toRed);
  buf.writeFloat(toGreen);
  buf.writeFloat(toBlue);
}

int DustColorTransitionParticle::getParticleID() const {
  return 15;
}
