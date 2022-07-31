#include "ambient_creature_metadata.h"

AmbientCreatureMetadata::~AmbientCreatureMetadata() = default;
AmbientCreatureMetadata::AmbientCreatureMetadata() = default;

void AmbientCreatureMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MobMetadata::wrapperWrite(wrapper);
}
