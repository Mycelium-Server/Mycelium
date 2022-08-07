#pragma once

#include "monster_metadata.h"

class EndermanMetadata : public MonsterMetadata {
 public:
  EndermanMetadata();
  ~EndermanMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
  
 public:
  int CarriedBlock = 0;
  bool IsScreaming = false;
  bool IsStaring = false;
};