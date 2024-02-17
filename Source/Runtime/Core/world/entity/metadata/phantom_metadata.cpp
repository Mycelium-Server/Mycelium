
#include "phantom_metadata.h"

PhantomMetadata::PhantomMetadata() = default;
PhantomMetadata::~PhantomMetadata() = default;

void PhantomMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  FlyingMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(16, size);
}