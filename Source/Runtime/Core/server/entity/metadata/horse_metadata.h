#pragma once

#include "abstract_horse_metadata.h"

class HorseMetadata : public AbstractHorseMetadata {
 public:
  HorseMetadata();
  ~HorseMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  int variant = 0;
};