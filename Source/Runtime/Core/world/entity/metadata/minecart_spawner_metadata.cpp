
#include "minecart_spawner_metadata.h"

MinecraftSpawnerMetadata::MinecraftSpawnerMetadata() = default;
MinecraftSpawnerMetadata::~MinecraftSpawnerMetadata() = default;

void MinecraftSpawnerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartMetadata::wrapperWrite(wrapper);
}