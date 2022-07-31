#include "abstract_villager_metadata.h"

AbstractVillagerMetadata::AbstractVillagerMetadata() = default;
AbstractVillagerMetadata::~AbstractVillagerMetadata() = default;

void AbstractVillagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AgeableMobMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, headShakeTimer);
}
