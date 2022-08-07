#include "evoker_metadata.h"

EvokerMetadata::EvokerMetadata() = default;
EvokerMetadata::~EvokerMetadata() = default;

void EvokerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  SpellcasterIllagerMetadata::wrapperWrite(wrapper);
}
