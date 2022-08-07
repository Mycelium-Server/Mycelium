#include "ender_dragon_metadata.h"

EnderDragonMetadata::EnderDragonMetadata() = default;
EnderDragonMetadata::~EnderDragonMetadata() = default;

void EnderDragonMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MobMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(16, dragonPhase);
}