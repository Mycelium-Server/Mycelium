#pragma once

#include "animal_metadata.h"

class BeeMetadata : public AnimalMetadata {
 public:
  BeeMetadata();
  ~BeeMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isAngry = false;
  bool hasStung = false;
  bool hasNectar = false;
  int angerTime = 0;
};