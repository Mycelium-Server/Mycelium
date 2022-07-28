#include "thrown_potion_metadata.h"

ThrownPotionMetadata::ThrownPotionMetadata() = default;
ThrownPotionMetadata::~ThrownPotionMetadata() = default;

void ThrownPotionMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    wrapper.writeItem(8, potion);
}
