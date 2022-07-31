#include "base_piglin_metadata.h"

BasePiglinMetadata::BasePiglinMetadata() = default;
BasePiglinMetadata::~BasePiglinMetadata() = default;

void BasePiglinMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isImmuneToZombification);
}
