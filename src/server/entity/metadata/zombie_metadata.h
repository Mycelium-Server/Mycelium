#pragma once

#include "monster_metadata.h"

class ZombieMetadata : public MonsterMetadata {
 public:
  ZombieMetadata();
  ~ZombieMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isBaby = false;
  bool isBecomingDrowned = false;
};