
#include "hoglin_metadata.h"

HoglinMetadata::HoglinMetadata() = default;
HoglinMetadata::~HoglinMetadata() = default;

void HoglinMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, isImmuneToZombification);
}
