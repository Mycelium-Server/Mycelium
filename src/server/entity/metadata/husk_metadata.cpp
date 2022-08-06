#include "husk_metadata.h"

HuskMetadata::HuskMetadata() = default;
HuskMetadata::~HuskMetadata() = default;

void HuskMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ZombieMetadata::wrapperWrite(wrapper);
}
