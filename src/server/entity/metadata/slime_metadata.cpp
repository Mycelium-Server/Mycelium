#include "slime_metadata.h"

SlimeMetadata::SlimeMetadata() = default;
SlimeMetadata::~SlimeMetadata() = default;

void SlimeMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MobMetadata::wrapperWrite(wrapper);
  wrapper.VarInt(16, size);
}
