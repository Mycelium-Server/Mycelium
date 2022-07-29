#include "water_animal_metadata.h"

WaterAnimalMetadata::WaterAnimalMetadata() = default;
WaterAnimalMetadata::~WaterAnimalMetadata() = default;

void WaterAnimalMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    PathfinderMobMetadata::wrapperWrite(wrapper);
}
