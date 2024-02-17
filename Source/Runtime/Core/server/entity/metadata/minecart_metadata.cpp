
#include "minecart_metadata.h"

MinecraftMetadata::MinecraftMetadata() = default;
MinecraftMetadata::~MinecraftMetadata() = default;

void MinecraftMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartMetadata::wrapperWrite(wrapper);
}