#pragma once

#include "monster_metadata.h"

class CreeperMetadata : public MonsterMetadata {
 public:
  CreeperMetadata();
  ~CreeperMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int state = -1;
  bool isCharged = false;
  bool isIgnited = false;
};