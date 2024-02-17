#pragma once

#include "flying_metadata.h"

class GhastMetadata : public FlyingMetadata {
 public:
  GhastMetadata();
  ~GhastMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  bool isAttacking = false;
};
