#include "skeleton_horse_metadata.h"

SkeletonHorseMetadata::SkeletonHorseMetadata() = default;
SkeletonHorseMetadata::~SkeletonHorseMetadata() = default;

void SkeletonHorseMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AbstractHorseMetadata::wrapperWrite(wrapper);
}
