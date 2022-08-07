#include "ghast_metadata.h"

GhastMetadata::GhastMetadata() = default;
GhastMetadata::~GhastMetadata() = default;

void GhastMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  FlyingMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, isAttacking);
}
