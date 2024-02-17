#pragma once

#include "entity_metadata.h"

class ThrownPotionMetadata : public EntityMetadata {
 public:
  ThrownPotionMetadata();
  ~ThrownPotionMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack potion;
};