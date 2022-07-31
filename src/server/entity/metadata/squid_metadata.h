#pragma once

#include "water_animal_metadata.h"

class SquidMetadata : public WaterAnimalMetadata {
 public:
  SquidMetadata();
  ~SquidMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};