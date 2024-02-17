
#include "salmon_metadata.h"

SalmonMetadata::SalmonMetadata() = default;
SalmonMetadata::~SalmonMetadata() = default;

void SalmonMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractFishMetadata::wrapperWrite(wrapper);
}
