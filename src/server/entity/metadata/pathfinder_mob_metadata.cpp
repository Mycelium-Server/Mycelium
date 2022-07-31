#include "pathfinder_mob_metadata.h"

PathfinderMobMetadata::PathfinderMobMetadata() = default;
PathfinderMobMetadata::~PathfinderMobMetadata() = default;

void PathfinderMobMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MobMetadata::wrapperWrite(wrapper);
}
