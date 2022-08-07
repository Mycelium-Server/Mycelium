#pragma once

#include "abstract_illager_metadata.h"

class VindicatorMetadata : public AbstractIllagerMetadata {
 public:
  VindicatorMetadata();
  ~VindicatorMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};