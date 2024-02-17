
#include "blaze_metadata.h"

BlazeMetadata::BlazeMetadata() = default;
BlazeMetadata::~BlazeMetadata() = default;

void BlazeMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(16, isOnFire);
}
