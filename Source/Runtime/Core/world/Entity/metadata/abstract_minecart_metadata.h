#pragma once

#include "entity_metadata.h"

class AbstractMinecartMetadata : public EntityMetadata {
 public:
  AbstractMinecartMetadata();
  ~AbstractMinecartMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int shakingPower = 0;
  int shakingDirection = 1;
  float shakingMultiplier = 0.0;
  int customBlockIDAndDamage = 0;
  int customBlockYPosition = 6;
  bool showCustomBlock = false;
};