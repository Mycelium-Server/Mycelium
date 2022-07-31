#pragma once

#include "water_animal_metadata.h"

class AbstractFishMetadata : public WaterAnimalMetadata {
 public:
  AbstractFishMetadata();
  ~AbstractFishMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool fromBucket = false;
};