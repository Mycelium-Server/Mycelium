#pragma once

#include "water_animal_metadata.h"

class DolphinMetadata : public WaterAnimalMetadata {
 public:
  DolphinMetadata();
  ~DolphinMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  BlockPosition treasurePosition {};
  bool hasFish = false;
  int moistureLevel = 2400;
};