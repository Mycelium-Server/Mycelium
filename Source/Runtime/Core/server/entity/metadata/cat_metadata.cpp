
#include "cat_metadata.h"

CatMetadata::CatMetadata() = default;
CatMetadata::~CatMetadata() = default;

void CatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  TameableAnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeCatVariant(19, type);
  wrapper.writeByte(20, isLying);
  wrapper.writeByte(21, isRelaxed);
  wrapper.writeVarInt(22, collarColor);
}
