#pragma once

#include "raider_metadata.h"

class RavagerMetadata : public RaiderMetadata {
 public:
  RavagerMetadata();
  ~RavagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};