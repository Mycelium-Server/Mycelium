#pragma once

#include "animal_metadata.h"

class GoatMetadata : public AnimalMetadata {
 public:
  GoatMetadata();
  ~GoatMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isScreaming = false;
  bool hasLeftHorn = true;
  bool hasRightHorn = true;
};