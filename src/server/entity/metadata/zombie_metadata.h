#pragma once

#include "monster_metadata.h"

class ZombieMetadata : public MonsterMetadata {
 public:
  ZombieMetadata();
  ~ZombieMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool IsBaby = false;
  int Unused = 0;
  bool IsBecomingDrowned = false;
};