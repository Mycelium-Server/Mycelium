#include "snow_golem_metadata.h"

SnowGolemMetadata::SnowGolemMetadata() = default;
SnowGolemMetadata::~SnowGolemMetadata() = default;

void SnowGolemMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractGolemMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(16, hasPumpkinHat ? 0x10 : 0x00);
}
