
#include "guardian_metadata.h"

GuardianMetadata::GuardianMetadata() = default;
GuardianMetadata::~GuardianMetadata() = default;

void GuardianMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isRetractingSpikes);
  wrapper.writeVarInt(17, targetEID);
}
