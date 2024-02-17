#pragma once

#include "living_entity_metadata.h"

class MobMetadata : public LivingEntityMetadata {
 public:
  MobMetadata();
  ~MobMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool noAI = false;
  bool isLeftHanded = false;
  bool isAggressive = false;
};