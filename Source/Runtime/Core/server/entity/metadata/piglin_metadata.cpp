
#include "piglin_metadata.h"

PiglinMetadata::PiglinMetadata() = default;
PiglinMetadata::~PiglinMetadata() = default;

void PiglinMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  BasePiglinMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, isBaby);
  wrapper.writeBool(18, isChargingCrossbow);
  wrapper.writeBool(19, isDancing);
}
