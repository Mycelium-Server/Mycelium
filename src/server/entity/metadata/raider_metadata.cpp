#include "raider_metadata.h"

RaiderMetadata::RaiderMetadata() = default;
RaiderMetadata::~RaiderMetadata() = default;

void RaiderMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isCelebrating);
}
