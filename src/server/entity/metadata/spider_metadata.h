#pragma once

#include "monster_metadata.h"

class SpiderMetadata : public MonsterMetadata {
 public:
  SpiderMetadata();
  ~SpiderMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  bool isClimbing = false;
};