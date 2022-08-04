#include "witch_metadata.h"

WitchMetadata::WitchMetadata() = default;
WitchMetadata::~WitchMetadata() = default;

void WitchMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  RaiderMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(17, isDrinkingPotion);
}
