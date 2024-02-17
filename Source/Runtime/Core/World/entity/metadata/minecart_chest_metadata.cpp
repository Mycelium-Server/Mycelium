
#include "minecart_chest_metadata.h"

MinecartChestMetadata::MinecartChestMetadata() = default;
MinecartChestMetadata::~MinecartChestMetadata() = default;

void MinecartChestMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartContainerMetadata::wrapperWrite(wrapper);
}