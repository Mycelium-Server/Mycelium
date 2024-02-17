#pragma once

#include "animal_metadata.h"

class StriderMetadata : public AnimalMetadata {
 public:
  StriderMetadata();
  ~StriderMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int boostTime = 0;
  bool isShaking = false;
  bool hasSaddle = false;
};