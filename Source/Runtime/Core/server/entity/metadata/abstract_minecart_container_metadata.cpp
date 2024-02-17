
#include "abstract_minecart_container_metadata.h"

AbstractMinecartContainerMetadata::AbstractMinecartContainerMetadata() = default;
AbstractMinecartContainerMetadata::~AbstractMinecartContainerMetadata() = default;

void AbstractMinecartContainerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartMetadata::wrapperWrite(wrapper);
}
