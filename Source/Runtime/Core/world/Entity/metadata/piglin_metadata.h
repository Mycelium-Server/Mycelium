#pragma once

#include "base_piglin_metadata.h"

class PiglinMetadata : public BasePiglinMetadata {
 public:
  PiglinMetadata();
  ~PiglinMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isBaby = false;
  bool isChargingCrossbow = false;
  bool isDancing = false;
};