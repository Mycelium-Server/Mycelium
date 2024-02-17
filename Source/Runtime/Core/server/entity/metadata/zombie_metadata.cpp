
#include "zombie_metadata.h"

ZombieMetadata::ZombieMetadata() = default;
ZombieMetadata::~ZombieMetadata() = default;

void ZombieMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isBaby);
  wrapper.writeBool(18, isBecomingDrowned);
}