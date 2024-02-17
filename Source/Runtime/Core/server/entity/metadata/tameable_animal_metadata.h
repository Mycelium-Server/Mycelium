#pragma once

#include "animal_metadata.h"

class TameableAnimalMetadata : public AnimalMetadata {
 public:
  TameableAnimalMetadata();
  ~TameableAnimalMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isSitting = false;
  bool isTamed = false;
  std::optional<uuids::uuid> owner;
};