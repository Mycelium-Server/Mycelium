#pragma once

#include "abstract_horse_metadata.h"

class ZombieHorseMetadata : public AbstractHorseMetadata {
 public:
  ZombieHorseMetadata();
  ~ZombieHorseMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};