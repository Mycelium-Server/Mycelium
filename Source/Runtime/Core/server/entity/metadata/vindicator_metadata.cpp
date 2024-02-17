
#include "vindicator_metadata.h"

VindicatorMetadata::VindicatorMetadata() = default;
VindicatorMetadata::~VindicatorMetadata() = default;

void VindicatorMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractIllagerMetadata::wrapperWrite(wrapper);
}
