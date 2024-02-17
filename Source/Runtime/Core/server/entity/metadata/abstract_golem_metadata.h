#pragma once

#include "pathfinder_mob_metadata.h"

class AbstractGolemMetadata : public PathfinderMobMetadata {
 public:
  AbstractGolemMetadata();
  ~AbstractGolemMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};