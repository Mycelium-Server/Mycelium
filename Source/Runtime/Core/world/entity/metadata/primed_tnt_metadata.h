#pragma once

#include "entity_metadata.h"

class PrimedTNTMetadata : public EntityMetadata {
 public:
  PrimedTNTMetadata();
  ~PrimedTNTMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int fuseTime = 80;
};