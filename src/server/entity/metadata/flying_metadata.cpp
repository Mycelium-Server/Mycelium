#include "flying_metadata.h"

FlyingMetadata::FlyingMetadata() = default;
FlyingMetadata::~FlyingMetadata() = default;

void FlyingMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MobMetadata::wrapperWrite(wrapper);
}
