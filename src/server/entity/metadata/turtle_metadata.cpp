#include "turtle_metadata.h"

TurtleMetadata::TurtleMetadata() = default;
TurtleMetadata::~TurtleMetadata() = default;

void TurtleMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writePosition(17, homePos);
  wrapper.writeBool(18, hasEgg);
  wrapper.writeBool(19, isLayingEgg);
  wrapper.writePosition(20, travelPos);
  wrapper.writeBool(21, isGoingHome);
  wrapper.writeBool(22, isTraveling);
}
