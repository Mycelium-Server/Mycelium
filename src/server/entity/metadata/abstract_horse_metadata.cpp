#include "abstract_horse_metadata.h"

AbstractHorseMetadata::AbstractHorseMetadata() = default;
AbstractHorseMetadata::~AbstractHorseMetadata() = default;

void AbstractHorseMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AnimalMetadata::wrapperWrite(wrapper);
    wrapper.writeByte(17, isTame << 1 | isSaddled << 2 | hasBred << 3 |
                        isEating << 4 | isRearing << 5 | isMouthOpen << 6);
    wrapper.writeOptUUID(18, owner);
}
