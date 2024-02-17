
#include "thrown_ender_pearl_metadata.h"

ThrownEnderPearlMetadata::ThrownEnderPearlMetadata() = default;
ThrownEnderPearlMetadata::~ThrownEnderPearlMetadata() = default;

void ThrownEnderPearlMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
