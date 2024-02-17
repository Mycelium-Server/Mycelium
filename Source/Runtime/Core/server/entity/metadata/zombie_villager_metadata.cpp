
#include "zombie_villager_metadata.h"

ZombieVillagerMetadata::ZombieVillagerMetadata() = default;
ZombieVillagerMetadata::~ZombieVillagerMetadata() = default;

void ZombieVillagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ZombieMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(19, isConverting);
  wrapper.writeVillagerData(20, villagerData);
}