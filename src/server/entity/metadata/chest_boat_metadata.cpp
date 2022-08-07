#include "chest_boat_metadata.h"

ChestBoatMetadata::ChestBoatMetadata() = default;
ChestBoatMetadata::~ChestBoatMetadata() = default;

void ChestBoatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  BoatMetadata::wrapperWrite(wrapper);
}
