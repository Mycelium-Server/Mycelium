
#include "minecart_tnt_metadata.h"

MinecraftTNTMetadata::MinecraftTNTMetadata() = default;
MinecraftTNTMetadata::~MinecraftTNTMetadata() = default;

void MinecraftTNTMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartMetadata::wrapperWrite(wrapper);
}