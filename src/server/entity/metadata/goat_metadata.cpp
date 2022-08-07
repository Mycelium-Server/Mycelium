#include "goat_metadata.h"

GoatMetadata::GoatMetadata() = default;
GoatMetadata::~GoatMetadata() = default;

void GoatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, isScreaming);
  wrapper.writeBool(18, hasLeftHorn);
  wrapper.writeBool(19, hasRightHorn);
}
