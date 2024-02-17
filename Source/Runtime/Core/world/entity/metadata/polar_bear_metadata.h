#pragma once

#include "animal_metadata.h"

class PolarBearMetadata : public AnimalMetadata {
 public:
  PolarBearMetadata();
  ~PolarBearMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isStandingUp = false;
};