#pragma once

#include "monster_metadata.h"

class VexMetadata : public MonsterMetadata {
 public:
  VexMetadata();
  ~VexMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isAttacking = false;
};