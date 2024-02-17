#pragma once

#include "entity_metadata.h"

class ThrownEnderPearlMetadata : public EntityMetadata {
 public:
  ThrownEnderPearlMetadata();
  ~ThrownEnderPearlMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
};