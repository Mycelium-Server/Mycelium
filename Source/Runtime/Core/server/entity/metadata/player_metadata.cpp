
#include "player_metadata.h"

PlayerMetadata::PlayerMetadata() = default;
PlayerMetadata::~PlayerMetadata() = default;

void PlayerMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  LivingEntityMetadata::wrapperWrite(wrapper);
  wrapper.writeFloat(15, additionalHearts);
  wrapper.writeVarInt(16, score);
  wrapper.writeByte(17, displayedSkinParts.value);
  wrapper.writeByte(18, (uint8_t) mainHand);
  if (leftShoulderEntityData) {
    wrapper.writeNBT(19, leftShoulderEntityData);
  }
  if (rightShoulderEntityData) {
    wrapper.writeNBT(20, rightShoulderEntityData);
  }
}
