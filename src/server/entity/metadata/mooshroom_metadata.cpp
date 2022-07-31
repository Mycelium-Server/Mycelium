#include "mooshroom_metadata.h"

MooshroomMetadata::MooshroomMetadata() = default;
MooshroomMetadata::~MooshroomMetadata() = default;

void MooshroomMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    CowMetadata::wrapperWrite(wrapper);
    wrapper.writeString(17, variant);
}
