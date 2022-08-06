#pragma once

#include "zombie_metadata.h"

class DrownedMetadata : public ZombieMetadata {
 public:
  DrownedMetadata();
  ~DrownedMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};