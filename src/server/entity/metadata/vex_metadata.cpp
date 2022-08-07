#include "vex_metadata.h"

VexMetadata::VexMetadata() = default;
VexMetadata::~VexMetadata() = default;

void VexMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isAttacking);
}
