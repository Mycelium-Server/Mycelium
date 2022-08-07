#include "bee_metadata.h"

BeeMetadata::BeeMetadata() = default;
BeeMetadata::~BeeMetadata() = default;

void BeeMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(17, hasNectar << 3 | hasStung << 2 | isAngry << 1);
  wrapper.writeVarInt(18, angerTime);
}
