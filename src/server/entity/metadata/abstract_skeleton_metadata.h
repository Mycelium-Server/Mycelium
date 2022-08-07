#pragma once

#include "monster_metadata.h"

class AbstractSkeletonMetadata : public MonsterMetadata {
 public:
  AbstractSkeletonMetadata();
  ~AbstractSkeletonMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};