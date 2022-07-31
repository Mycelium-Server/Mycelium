#pragma once

#include "abstract_fish_metadata.h"

class CodMetadata : public AbstractFishMetadata {
 public:
  CodMetadata();
  ~CodMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};