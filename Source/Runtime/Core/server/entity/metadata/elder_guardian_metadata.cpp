
#include "elder_guardian_metadata.h"

ElderGuardianMetadata::ElderGuardianMetadata() = default;
ElderGuardianMetadata::~ElderGuardianMetadata() = default;

void ElderGuardianMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  GuardianMetadata::wrapperWrite(wrapper);
}
