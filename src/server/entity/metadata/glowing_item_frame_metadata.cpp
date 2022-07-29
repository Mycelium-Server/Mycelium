#include "glowing_item_frame_metadata.h"

GlowingItemFrameMetadata::GlowingItemFrameMetadata() = default;
GlowingItemFrameMetadata::~GlowingItemFrameMetadata() = default;

void GlowingItemFrameMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    ItemFrameMetadata::wrapperWrite(wrapper);
}
