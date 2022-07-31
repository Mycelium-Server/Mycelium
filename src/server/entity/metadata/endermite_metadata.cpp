#include "endermite_metadata.h"

EndermiteMetadata::EndermiteMetadata() = default;
EndermiteMetadata::~EndermiteMetadata() = default;

void EndermiteMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    MonsterMetadata::wrapperWrite(wrapper);
}
