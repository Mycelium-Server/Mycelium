#pragma once

#include "entity_metadata.h"

class ThrownExpBottleMetadata : public EntityMetadata {
 public:
  ThrownExpBottleMetadata();
  ~ThrownExpBottleMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
};