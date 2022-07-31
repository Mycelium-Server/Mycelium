#include "chicken_metadata.h"

ChickenMetadata::ChickenMetadata() = default;
ChickenMetadata::~ChickenMetadata() = default;

void ChickenMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AnimalMetadata::wrapperWrite(wrapper);
}
