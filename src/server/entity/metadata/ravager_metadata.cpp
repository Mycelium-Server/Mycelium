#include "ravager_metadata.h"

RavagerMetadata::RavagerMetadata() = default;
RavagerMetadata::~RavagerMetadata() = default;

void RavagerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  RaiderMetadata::wrapperWrite(wrapper);
}
