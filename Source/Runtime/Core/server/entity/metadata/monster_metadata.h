#pragma once

#include "pathfinder_mob_metadata.h"

class MonsterMetadata : public PathfinderMobMetadata {
 public:
  MonsterMetadata();
  ~MonsterMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};