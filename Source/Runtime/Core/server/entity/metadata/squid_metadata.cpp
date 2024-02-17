
#include "squid_metadata.h"

SquidMetadata::SquidMetadata() = default;
SquidMetadata::~SquidMetadata() = default;

void SquidMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  WaterAnimalMetadata::wrapperWrite(wrapper);
}
