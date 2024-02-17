
#include "thrown_trident_metadata.h"

ThrownTridentMetadata::ThrownTridentMetadata() = default;
ThrownTridentMetadata::~ThrownTridentMetadata() = default;

void ThrownTridentMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractArrowMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(10, loyaltyLevel);
  wrapper.writeBool(11, hasEnchantmentGlint);
}
