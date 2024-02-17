#pragma once

#include "metadata.h"
#include "pose.h"

class EntityMetadata : public AbstractEntityMetadata {
 public:
  EntityMetadata();
  ~EntityMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  union {
    struct {
      uint8_t isOnFire : 1;
      uint8_t isCrouching : 1;
      uint8_t unused : 1;
      uint8_t isSprinting : 1;
      uint8_t isSwimming : 1;
      uint8_t isInvisible : 1;
      uint8_t isGlowing : 1;
      uint8_t isFlying : 1;
    };
    uint8_t value = 0;
  } bitfield {};
  int airTicks = 300;
  std::optional<std::string> customName;
  bool customNameVisible = false;
  bool isSilent = false;
  bool hasNoGravity = false;
  Pose pose = Pose::STANDING;
  int frozenTicks = 0;
};