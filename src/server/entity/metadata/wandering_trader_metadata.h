#pragma once

#include "abstract_villager_metadata.h"

class WanderingTraderMetadata : public AbstractVillagerMetadata {
 public:
  WanderingTraderMetadata();
  ~WanderingTraderMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};