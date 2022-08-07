#include "pig_metadata.h"

PigMetadata::PigMetadata() = default;
PigMetadata::~PigMetadata() = default;

void PigMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, hasSaddle);
  wrapper.writeVarInt(18, boostTime);
}
