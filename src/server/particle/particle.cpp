#include "particle.h"

AbstractParticle::AbstractParticle() = default;
AbstractParticle::~AbstractParticle() = default;

void AbstractParticle::write(ByteBuffer& buf) {
    buf.writeVarInt(getParticleID());
    writeData(buf);
}