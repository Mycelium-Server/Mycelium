#include "flying_metadata.h"

FliyingMetadata::FliyingMetadata() = default;
FliyingMetadata::~FliyingMetadata() = default;

void FliyingMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MobMetadata::wrapperWrite(wrapper);
}
