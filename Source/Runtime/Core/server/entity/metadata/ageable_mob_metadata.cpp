
#include "ageable_mob_metadata.h"

AgeableMobMetadata::AgeableMobMetadata() = default;
AgeableMobMetadata::~AgeableMobMetadata() = default;

void AgeableMobMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  PathfinderMobMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isBaby);
}
