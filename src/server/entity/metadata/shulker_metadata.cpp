#include "shulker_metadata.h"

ShulkerMetadata::ShulkerMetadata() = default;
ShulkerMetadata::~ShulkerMetadata() = default;

void ShulkerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AbstractGolemMetadata::wrapperWrite(wrapper);
    wrapper.writeDirection(16, attachFace);
    wrapper.writeOptPosition(17, attachmentPosition);
    wrapper.writeByte(18, shieldHeight);
    wrapper.writeByte(19, color);
}
