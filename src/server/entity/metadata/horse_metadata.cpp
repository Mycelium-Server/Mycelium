#include "horse_metadata.h"

HorseMetadata::HorseMetadata() = default;
HorseMetadata::~HorseMetadata() = default;

void HorseMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AbstractHorseMetadata::wrapperWrite(wrapper);
    wrapper.writeVarInt(19, variant);
}
