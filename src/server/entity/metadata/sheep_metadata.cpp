#include "sheep_metadata.h"

SheepMetadata::SheepMetadata() = default;
SheepMetadata::~SheepMetadata() = default;

void SheepMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(17, colorID & 15 | isSheared << 4);
}
