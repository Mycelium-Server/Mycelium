#include "spellcaster_illager_metadata.h"

SpellcasterIllagerMetadata::SpellcasterIllagerMetadata() = default;
SpellcasterIllagerMetadata::~SpellcasterIllagerMetadata() = default;

void SpellcasterIllagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractIllagerMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(17, spell);
}
