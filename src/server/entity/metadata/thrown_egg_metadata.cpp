#include "thrown_egg_metadata.h"

ThrownEggMetadata::ThrownEggMetadata() = default;
ThrownEggMetadata::~ThrownEggMetadata() = default;

void ThrownEggMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    wrapper.writeItem(8, item);
}
