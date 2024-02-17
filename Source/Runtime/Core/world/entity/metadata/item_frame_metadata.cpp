
#include "item_frame_metadata.h"

ItemFrameMetadata::ItemFrameMetadata() = default;
ItemFrameMetadata::~ItemFrameMetadata() = default;

void ItemFrameMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
  wrapper.writeVarInt(9, rotation);
}
