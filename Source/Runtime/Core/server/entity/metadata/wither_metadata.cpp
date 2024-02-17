
#include "wither_metadata.h"

WitherMetadata::WitherMetadata() = default;
WitherMetadata::~WitherMetadata() = default;

void WitherMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(16, centerHeadsTarget);
  wrapper.writeVarInt(17, leftHeadsTarget);
  wrapper.writeVarInt(18, rightHeadsTarget);
  wrapper.writeVarInt(19, invulnerableTime);
}