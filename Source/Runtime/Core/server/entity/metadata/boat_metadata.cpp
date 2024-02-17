
#include "boat_metadata.h"

BoatMetadata::BoatMetadata() = default;
BoatMetadata::~BoatMetadata() = default;

void BoatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(8, timeSinceLastHit);
  wrapper.writeVarInt(9, forwardDirection);
  wrapper.writeFloat(10, damageTaken);
  wrapper.writeVarInt(11, (int) type);
  wrapper.writeBool(12, leftPaddleTurning);
  wrapper.writeBool(13, rightPaddleTurning);
  wrapper.writeVarInt(14, splashTimer);
}
