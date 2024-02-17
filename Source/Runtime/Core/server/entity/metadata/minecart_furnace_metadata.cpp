
#include "minecart_furnace_metadata.h"

MinecraftFurnaceMetadata::MinecraftFurnaceMetadata() = default;
MinecraftFurnaceMetadata::~MinecraftFurnaceMetadata() = default;

void MinecraftFurnaceMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartMetadata::wrapperWrite(wrapper);
  wrapper.writeBool(14, hasFuel);
}