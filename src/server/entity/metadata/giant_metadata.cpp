#include "giant_metadata.h"

GiantMetadata::GiantMetadata() = default;
GiantMetadata::~GiantMetadata() = default;

void GiantMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    MonsterMetadata::wrapperWrite(wrapper);
}
