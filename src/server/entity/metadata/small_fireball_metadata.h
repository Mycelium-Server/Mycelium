#pragma once

#include "entity_metadata.h"

class SmallFireballMetadata : public EntityMetadata {
 public:
  SmallFireballMetadata();
  ~SmallFireballMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
};