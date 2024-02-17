#pragma once

#include "abstract_fish_metadata.h"

class PufferFishMetadata : public AbstractFishMetadata {
 public:
  PufferFishMetadata();
  ~PufferFishMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int puffState = 0;
};