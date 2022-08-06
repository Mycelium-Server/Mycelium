#include "drowned_metadata.h"

DrownedMetadata::DrownedMetadata() = default;
DrownedMetadata::~DrownedMetadata() = default;

void DrownedMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ZombieMetadata::wrapperWrite(wrapper);
}
