
#include "creeper_metadata.h"

CreeperMetadata::CreeperMetadata() = default;
CreeperMetadata::~CreeperMetadata() = default;

void CreeperMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(16, state);
  wrapper.writeBool(17, isCharged);
  wrapper.writeBool(18, isIgnited);
}
