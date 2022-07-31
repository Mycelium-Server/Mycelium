#include "small_fireball_metadata.h"

SmallFireballMetadata::SmallFireballMetadata() = default;
SmallFireballMetadata::~SmallFireballMetadata() = default;

void SmallFireballMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
