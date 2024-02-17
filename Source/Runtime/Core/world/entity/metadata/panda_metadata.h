#pragma once

#include "animal_metadata.h"

class PandaMetadata : public AnimalMetadata {
 public:
  PandaMetadata();
  ~PandaMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int breedTimer = 0;
  int sneezeTimer = 0;
  int eatTimer = 0;
  uint8_t mainGene = 0;
  uint8_t hiddenGene = 0;
  bool isSneezing = false;
  bool isRolling = false;
  bool isSitting = false;
  bool isOnBack = false;
};