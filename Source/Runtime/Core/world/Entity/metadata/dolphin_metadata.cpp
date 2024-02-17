
#include "dolphin_metadata.h"

DolphinMetadata::DolphinMetadata() = default;
DolphinMetadata::~DolphinMetadata() = default;

void DolphinMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  WaterAnimalMetadata::wrapperWrite(wrapper);
  wrapper.writePosition(16, treasurePosition);
  wrapper.writeBool(17, hasFish);
  wrapper.writeVarInt(18, moistureLevel);
}
