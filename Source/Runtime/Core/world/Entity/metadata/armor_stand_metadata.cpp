
#include "armor_stand_metadata.h"

ArmorStandMetadata::ArmorStandMetadata() = default;
ArmorStandMetadata::~ArmorStandMetadata() = default;

void ArmorStandMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  LivingEntityMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(15, isMarker << 3 | hasNoBasePlate << 2 | hasArms << 1 | isSmall);
  wrapper.writeRotation(16, headRotation.x, headRotation.y, headRotation.z);
  wrapper.writeRotation(17, bodyRotation.x, bodyRotation.y, bodyRotation.z);
  wrapper.writeRotation(18, leftArmRotation.x, leftArmRotation.y, leftArmRotation.z);
  wrapper.writeRotation(19, rightArmRotation.x, rightArmRotation.y, rightArmRotation.z);
  wrapper.writeRotation(20, leftLegRotation.x, leftLegRotation.y, leftLegRotation.z);
  wrapper.writeRotation(21, rightLegRotation.x, rightLegRotation.y, rightLegRotation.z);
}
