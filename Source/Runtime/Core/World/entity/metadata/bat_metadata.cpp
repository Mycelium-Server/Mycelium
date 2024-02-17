
#include "bat_metadata.h"

BatMetadata::BatMetadata() = default;
BatMetadata::~BatMetadata() = default;

void BatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AmbientCreatureMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(16, isHanging);
}
