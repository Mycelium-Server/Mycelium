#include "abstract_skeleton_metadata.h"

AbstractSkeletonMetadata::AbstractSkeletonMetadata() = default;
AbstractSkeletonMetadata::~AbstractSkeletonMetadata() = default;

void AbstractSkeletonMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
}
