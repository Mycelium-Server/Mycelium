
#include "snowball_metadata.h"

SnowballMetadata::SnowballMetadata() = default;
SnowballMetadata::~SnowballMetadata() = default;

void SnowballMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
