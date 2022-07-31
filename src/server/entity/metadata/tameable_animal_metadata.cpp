#include "tameable_animal_metadata.h"

TameableAnimalMetadata::TameableAnimalMetadata() = default;
TameableAnimalMetadata::~TameableAnimalMetadata() = default;

void TameableAnimalMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AnimalMetadata::wrapperWrite(wrapper);
    wrapper.writeByte(17, isTamed << 2 | isSitting);
    wrapper.writeOptUUID(18, owner);
}
