#pragma once

#include "tameable_animal_metadata.h"

class WolfMetadata : public TameableAnimalMetadata {
 public:
  WolfMetadata();
  ~WolfMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isBegging = false;
  int collarColor = 14;
  int angerTime = 0;
};