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
  Vector3f headRotation;
  Vector3f bodyRotation;
  Vector3f leftArmRotation;
  Vector3f rightArmRotation;
  Vector3f leftLegRotation;
  Vector3f rightLegRotation;
};