#include "warden_metadata.h"

WardenMetadata::WardenMetadata() = default;
WardenMetadata::~WardenMetadata() = default;

void WardenMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(16, angerLevel);
}
