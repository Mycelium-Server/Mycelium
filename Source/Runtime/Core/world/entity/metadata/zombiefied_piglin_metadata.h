#pragma once

#include "zombie_metadata.h"

class ZombiefiedPiglinMetadata : public ZombieMetadata {
 public:
  ZombiefiedPiglinMetadata();
  ~ZombiefiedPiglinMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};
