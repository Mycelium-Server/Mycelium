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
  unsigned char mainGene = 0;
  unsigned char hiddenGene = 0;
  bool isSneezing = false;
  bool isRolling = false;
  bool isSitting = false;
  bool isOnBack = false;
};