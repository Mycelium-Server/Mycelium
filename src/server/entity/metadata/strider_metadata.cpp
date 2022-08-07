#include "strider_metadata.h"

StriderMetadata::StriderMetadata() = default;
StriderMetadata::~StriderMetadata() = default;

void StriderMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, boostTime);
  wrapper.writeBool(18, isShaking);
  wrapper.writeBool(19, hasSaddle);
}
