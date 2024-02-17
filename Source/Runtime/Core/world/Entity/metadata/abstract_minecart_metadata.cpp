
#include "abstract_minecart_metadata.h"

AbstractMinecartMetadata::AbstractMinecartMetadata() = default;
AbstractMinecartMetadata::~AbstractMinecartMetadata() = default;

void AbstractMinecartMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(8, shakingPower);
  wrapper.writeVarInt(9, shakingDirection);
  wrapper.writeFloat(10, shakingMultiplier);
  wrapper.writeVarInt(11, customBlockIDAndDamage);
  wrapper.writeVarInt(12, customBlockYPosition);
  wrapper.writeBool(13, showCustomBlock);
}