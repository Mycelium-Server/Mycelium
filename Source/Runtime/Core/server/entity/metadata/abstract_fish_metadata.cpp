
#include "abstract_fish_metadata.h"

AbstractFishMetadata::AbstractFishMetadata() = default;
AbstractFishMetadata::~AbstractFishMetadata() = default;

void AbstractFishMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  WaterAnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(16, fromBucket);
}
