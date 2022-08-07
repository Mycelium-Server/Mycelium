#include "zoglin_metadata.h"

ZoglinMetadata::ZoglinMetadata() = default;
ZoglinMetadata::~ZoglinMetadata() = default;

void ZoglinMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isBaby);
}