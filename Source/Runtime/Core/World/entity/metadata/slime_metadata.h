#pragma once

#include "mob_metadata.h"

class SlimeMetadata : public MobMetadata {
 public:
  SlimeMetadata();
  ~SlimeMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int size = 1;
};
