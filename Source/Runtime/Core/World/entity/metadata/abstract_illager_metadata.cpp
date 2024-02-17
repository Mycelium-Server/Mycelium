
#include "abstract_illager_metadata.h"

AbstractIllagerMetadata::AbstractIllagerMetadata() = default;
AbstractIllagerMetadata::~AbstractIllagerMetadata() = default;

void AbstractIllagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  RaiderMetadata::wrapperWrite(wrapper);
}
