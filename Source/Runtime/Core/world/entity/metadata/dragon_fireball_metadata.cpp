
#include "dragon_fireball_metadata.h"

DragonFireballMetadata::DragonFireballMetadata() = default;
DragonFireballMetadata::~DragonFireballMetadata() = default;

void DragonFireballMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
}
