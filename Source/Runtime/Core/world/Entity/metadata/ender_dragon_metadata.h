#pragma once

#include "mob_metadata.h"

class EnderDragonMetadata : public MobMetadata {
 public:
  EnderDragonMetadata();
  ~EnderDragonMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int dragonPhase = 10;
};
