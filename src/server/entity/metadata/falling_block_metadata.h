#pragma once

#include "entity_metadata.h"

class FallingBlockMetadata : public EntityMetadata {
 public:
  FallingBlockMetadata();
  ~FallingBlockMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ProtocolPosition spawnPosition {};
};