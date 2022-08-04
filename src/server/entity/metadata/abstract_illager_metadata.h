#pragma once

#include "raider_metadata.h"

class AbstractIllagerMetadata : public RaiderMetadata {
 public:
  AbstractIllagerMetadata();
  ~AbstractIllagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};