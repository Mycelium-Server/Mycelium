#pragma once

#include "monster_metadata.h"

class RaiderMetadata : public MonsterMetadata {
 public:
  RaiderMetadata();
  ~RaiderMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isCelebrating = false;
};