
#include "skeleton_metadata.h"

SkeletonMetadata::SkeletonMetadata() = default;
SkeletonMetadata::~SkeletonMetadata() = default;

void SkeletonMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractSkeletonMetadata::wrapperWrite(wrapper);
}
