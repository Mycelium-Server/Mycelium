#include "arrow_metadata.h"

ArrowMetadata::ArrowMetadata() = default;
ArrowMetadata::~ArrowMetadata() = default;

void ArrowMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AbstractArrowMetadata::wrapperWrite(wrapper);
    wrapper.writeVarInt(10, color);
}
