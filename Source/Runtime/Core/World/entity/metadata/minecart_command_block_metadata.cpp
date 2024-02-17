
#include "minecart_command_block_metadata.h"

MinecraftCommandBlockMetadata::MinecraftCommandBlockMetadata() = default;
MinecraftCommandBlockMetadata::~MinecraftCommandBlockMetadata() = default;

void MinecraftCommandBlockMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractMinecartMetadata::wrapperWrite(wrapper);
  wrapper.writeString(14, command);
  wrapper.writeChat(15, lastOutput);
}