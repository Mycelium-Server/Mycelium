#pragma once

#include "animal_metadata.h"

class HoglinMetadata : public AnimalMetadata {
 public:
  HoglinMetadata();
  ~HoglinMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isImmuneToZombification = false;
};