#pragma once

#include "abstract_villager_metadata.h"

class VillagerMetadata : public AbstractVillagerMetadata {
 public:
  VillagerMetadata();
  ~VillagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  VillagerData villagerData {MINECRAFT_PLAINS, MINECRAFT_NONE, 1};
};