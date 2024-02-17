
#include "villager_metadata.h"

VillagerMetadata::VillagerMetadata() = default;
VillagerMetadata::~VillagerMetadata() = default;

void VillagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractVillagerMetadata::wrapperWrite(wrapper);
  wrapper.writeVillagerData(18, villagerData);
}
