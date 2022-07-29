#include "tropical_fish_metadata.h"

TropicalFishMetadata::TropicalFishMetadata() = default;
TropicalFishMetadata::~TropicalFishMetadata() = default;

void TropicalFishMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AbstractFishMetadata::wrapperWrite(wrapper);
    wrapper.writeVarInt(17, variant);
}
