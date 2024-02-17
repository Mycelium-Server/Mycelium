
#include "stray_metadata.h"

StrayMetadata::StrayMetadata() = default;
StrayMetadata::~StrayMetadata() = default;

void StrayMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractSkeletonMetadata::wrapperWrite(wrapper);
}
