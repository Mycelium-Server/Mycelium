#pragma once

#include "zombie_metadata.h"

class HuskMetadata : public ZombieMetadata {
 public:
  HuskMetadata();
  ~HuskMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;
};
