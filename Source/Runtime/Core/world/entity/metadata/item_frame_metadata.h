#pragma once

#include "entity_metadata.h"

class ItemFrameMetadata : public EntityMetadata {
 public:
  ItemFrameMetadata();
  ~ItemFrameMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack item;
  int rotation = 0;
};