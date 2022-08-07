#pragma once

#include "monster_metadata.h"

class BasePiglinMetadata : public MonsterMetadata {
 public:
  BasePiglinMetadata();
  ~BasePiglinMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isImmuneToZombification = false;
};