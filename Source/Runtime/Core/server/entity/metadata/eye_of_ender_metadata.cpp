
#include "eye_of_ender_metadata.h"

EyeOfEnderMetadata::EyeOfEnderMetadata() = default;
EyeOfEnderMetadata::~EyeOfEnderMetadata() = default;

void EyeOfEnderMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeItem(8, item);
}
