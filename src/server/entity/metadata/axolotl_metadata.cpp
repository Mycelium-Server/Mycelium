#include "axolotl_metadata.h"

AxolotlMetadata::AxolotlMetadata() = default;
AxolotlMetadata::~AxolotlMetadata() = default;

void AxolotlMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, variant);
  wrapper.writeBool(18, playingDead);
  wrapper.writeBool(19, fromBucket);
}
