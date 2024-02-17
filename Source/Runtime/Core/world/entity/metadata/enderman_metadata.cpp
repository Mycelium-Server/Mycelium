
#include "enderman_metadata.h"

EndermanMetadata::EndermanMetadata() = default;
EndermanMetadata::~EndermanMetadata() = default;

void EndermanMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeOptBlockID(16, carriedBlock);
  wrapper.writeBool(17, isScreaming);
  wrapper.writeBool(18, isStaring);
}
