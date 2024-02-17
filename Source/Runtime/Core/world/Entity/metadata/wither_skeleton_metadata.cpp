
#include "wither_skeleton_metadata.h"

WitherSkeletonMetadata::WitherSkeletonMetadata() = default;
WitherSkeletonMetadata::~WitherSkeletonMetadata() = default;

void WitherSkeletonMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractSkeletonMetadata::wrapperWrite(wrapper);
}
