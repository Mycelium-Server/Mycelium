#pragma once

#include "flying_metadata.h"

class PhantomMetadata : public FlyingMetadata {
 public:
  PhantomMetadata();
  ~PhantomMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int size = 0;
};