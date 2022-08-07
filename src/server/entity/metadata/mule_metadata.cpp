#include "mule_metadata.h"

MuleMetadata::MuleMetadata() = default;
MuleMetadata::~MuleMetadata() = default;

void MuleMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ChestedHorseMetadata::wrapperWrite(wrapper);
}
