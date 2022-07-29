#include "chested_horse_metadata.h"

ChestedHorseMetadata::ChestedHorseMetadata() = default;
ChestedHorseMetadata::~ChestedHorseMetadata() = default;

void ChestedHorseMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AbstractHorseMetadata::wrapperWrite(wrapper);
    wrapper.writeBool(19, hasChest);
}
