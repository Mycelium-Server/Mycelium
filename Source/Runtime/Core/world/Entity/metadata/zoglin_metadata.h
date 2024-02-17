#pragma once

#include "monster_metadata.h"

class ZoglinMetadata : public MonsterMetadata {
 public:
  ZoglinMetadata();
  ~ZoglinMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isBaby = false;
};
