#pragma once

#include "entity_metadata.h"

class FireballMetadata : public EntityMetadata {
 public:
  FireballMetadata();
  ~FireballMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
};