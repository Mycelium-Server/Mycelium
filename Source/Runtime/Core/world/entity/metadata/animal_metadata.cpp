
#include "animal_metadata.h"

AnimalMetadata::AnimalMetadata() = default;
AnimalMetadata::~AnimalMetadata() = default;

void AnimalMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AgeableMobMetadata::wrapperWrite(wrapper);
}
