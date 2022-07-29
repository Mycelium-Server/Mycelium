#include "abstract_arrow_metadata.h"

AbstractArrowMetadata::AbstractArrowMetadata() = default;
AbstractArrowMetadata::~AbstractArrowMetadata() = default;

void AbstractArrowMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    wrapper.writeByte(8, isCritical | isNoclip << 1);
    wrapper.writeByte(9, piercingLevel);
}