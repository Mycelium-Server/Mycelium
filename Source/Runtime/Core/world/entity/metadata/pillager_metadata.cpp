
#include "pillager_metadata.h"

PillagerMetadata::PillagerMetadata() = default;
PillagerMetadata::~PillagerMetadata() = default;

void PillagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractIllagerMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, isCharging);
}
