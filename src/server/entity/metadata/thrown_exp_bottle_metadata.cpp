#include "thrown_exp_bottle_metadata.h"

ThrownExpBottleMetadata::ThrownExpBottleMetadata() = default;
ThrownExpBottleMetadata::~ThrownExpBottleMetadata() = default;

void ThrownExpBottleMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
