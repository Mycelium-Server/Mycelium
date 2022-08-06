#include "enderman_metadata.h"

EndermanMetadata::EndermanMetadata() = default;
EndermanMetadata::~EndermanMetadata() = default;

void EndermanMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeOptBlockID(16, CarriedBlock)
  wrapper.writeBool(17, IsScreaming);
  wrapper.writeBool(18, IsStaring);
}
