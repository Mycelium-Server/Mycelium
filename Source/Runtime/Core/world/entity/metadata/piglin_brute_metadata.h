#pragma once

#include "base_piglin_metadata.h"

class PiglinBruteMetadata : public BasePiglinMetadata {
 public:
  PiglinBruteMetadata();
  ~PiglinBruteMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};