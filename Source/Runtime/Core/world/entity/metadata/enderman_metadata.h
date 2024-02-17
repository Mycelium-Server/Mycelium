#pragma once

#include "monster_metadata.h"

class EndermanMetadata : public MonsterMetadata {
 public:
  EndermanMetadata();
  ~EndermanMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int carriedBlock = 0;
  bool isScreaming = false;
  bool isStaring = false;
};
