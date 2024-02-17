#pragma once

#include "entity_metadata.h"

class ItemEntityMetadata : public EntityMetadata {
 public:
  ItemEntityMetadata();
  ~ItemEntityMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
};