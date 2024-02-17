#pragma once

#include "mob_metadata.h"

class FlyingMetadata : public MobMetadata {
 public:
  FlyingMetadata();
  ~FlyingMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};
