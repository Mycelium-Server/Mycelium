#include "vibration_particle.h"

VibrationParticle::VibrationParticle() = default;
VibrationParticle::~VibrationParticle() = default;

void VibrationParticle::writeData(ByteBuffer& buf) {
  buf.writeString(positionSourceType);
  if (positionSourceType == "minecraft:block") {
    buf.writeLong((long long) blockPosition.toProtocol());
  } else if (positionSourceType == "minecraft:entity") {
    buf.writeVarInt(entity->getEID());
    buf.writeFloat(entityEyeHeight);
  }
  buf.writeVarInt(ticks);
}

int VibrationParticle::getParticleID() const {
  return 36;
}
