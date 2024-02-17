
#include "primed_tnt_metadata.h"

PrimedTNTMetadata::PrimedTNTMetadata() = default;
PrimedTNTMetadata::~PrimedTNTMetadata() = default;

void PrimedTNTMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(8, fuseTime);
}