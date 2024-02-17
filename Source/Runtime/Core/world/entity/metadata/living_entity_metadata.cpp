
#include "living_entity_metadata.h"

LivingEntityMetadata::LivingEntityMetadata() = default;
LivingEntityMetadata::~LivingEntityMetadata() = default;

void LivingEntityMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(8, inRiptideSpinAttack << 2 | offhand << 1 | isHandActive);
  wrapper.writeFloat(9, health);
  wrapper.writeVarInt(10, potionEffectColor);
  wrapper.writeBool(11, ambientPotionEffect);
  wrapper.writeVarInt(12, numArrows);
  wrapper.writeVarInt(13, numBeeStingers);
  wrapper.writeOptPosition(14, bedLocation);
}
