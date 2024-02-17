
#include "iron_golem_metadata.h"

IronGolemMetadata::IronGolemMetadata() = default;
IronGolemMetadata::~IronGolemMetadata() = default;

void IronGolemMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractGolemMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(16, (uint8_t) isPlayerCreated);
}
