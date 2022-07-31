#pragma once

#include "entity_metadata.h"

class EyeOfEnderMetadata : public EntityMetadata {
 public:
  EyeOfEnderMetadata();
  ~EyeOfEnderMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
};