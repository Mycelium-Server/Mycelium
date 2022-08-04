#include "illusioner_metadata.h"

IllusionerMetadata::IllusionerMetadata() = default;
IllusionerMetadata::~IllusionerMetadata() = default;

void IllusionerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  SpellcasterIllagerMetadata::wrapperWrite(wrapper);
}
