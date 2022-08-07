#include "item_entity_metadata.h"

ItemEntityMetadata::ItemEntityMetadata() = default;
ItemEntityMetadata::~ItemEntityMetadata() = default;

void ItemEntityMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
