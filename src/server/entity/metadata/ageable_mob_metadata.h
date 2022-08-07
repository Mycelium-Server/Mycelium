#pragma once

#include "pathfinder_mob_metadata.h"

class AgeableMobMetadata : public PathfinderMobMetadata {
 public:
  AgeableMobMetadata();
  ~AgeableMobMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isBaby = false;
};