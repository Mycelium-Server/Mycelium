#pragma once

#include "living_entity_metadata.h"

class ArmorStandMetadata : public LivingEntityMetadata {
 public:
  ArmorStandMetadata();
  ~ArmorStandMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  bool isSmall = false;
  bool hasArms = false;
  bool hasNoBasePlate = false;
  bool isMarker = false;
  Rotation3f headRotation;
  Rotation3f bodyRotation;
  Rotation3f leftArmRotation;
  Rotation3f rightArmRotation;
  Rotation3f leftLegRotation;
  Rotation3f rightLegRotation;
};