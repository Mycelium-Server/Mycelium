
#include "wolf_metadata.h"

WolfMetadata::WolfMetadata() = default;
WolfMetadata::~WolfMetadata() = default;

void WolfMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  TameableAnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(19, isBegging);
  wrapper.writeVarInt(20, collarColor);
  wrapper.writeVarInt(21, angerTime);
}
