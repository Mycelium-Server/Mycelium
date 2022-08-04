#pragma once

#include "monster_metadata.h"

class WardenMetadata : public MonsterMetadata {
 public:
  WardenMetadata();
  ~WardenMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int angerLevel = 0;
};