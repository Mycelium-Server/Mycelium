
#include "minecart_hopper_metadata.h"

MinecraftHopperMetadata::MinecraftHopperMetadata() = default;
MinecraftHopperMetadata::~MinecraftHopperMetadata() = default;

void MinecraftHopperMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartContainerMetadata::wrapperWrite(wrapper);
}