
#include "polar_bear_metadata.h"

PolarBearMetadata::PolarBearMetadata() = default;
PolarBearMetadata::~PolarBearMetadata() = default;

void PolarBearMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, isStandingUp);
}
