#pragma once

#include "monster_metadata.h"

class WitherMetadata : public MonsterMetadata {
 public:
  WitherMetadata();
  ~WitherMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int centerHeadsTarget = 0;
  int leftHeadsTarget = 0;
  int rightHeadsTarget = 0;
  int invulnerableTime = 0;
};