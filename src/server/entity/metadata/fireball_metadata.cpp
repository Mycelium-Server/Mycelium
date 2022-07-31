#include "fireball_metadata.h"

FireballMetadata::FireballMetadata() = default;
FireballMetadata::~FireballMetadata() = default;

void FireballMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
