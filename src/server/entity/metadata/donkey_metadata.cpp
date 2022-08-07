#include "donkey_metadata.h"

DonkeyMetadata::DonkeyMetadata() = default;
DonkeyMetadata::~DonkeyMetadata() = default;

void DonkeyMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ChestedHorseMetadata::wrapperWrite(wrapper);
}
