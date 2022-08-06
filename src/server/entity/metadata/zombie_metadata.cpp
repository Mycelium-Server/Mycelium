#include "zombie_metadata.h"

ZombieMetadata::ZombieMetadata() = default;
ZombieMetadata::~ZombieMetadata() = default;

void ZombieMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, IsBaby);
  wrapper.writeVarInt(17, Unused);
  wrapper.writeBool(18, IsBecomingDrowned);
}