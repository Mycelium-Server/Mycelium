#pragma once

#include "zombie_metadata.h"

class ZombieVillagerMetadata : public ZombieMetadata {
 public:
  ZombieVillagerMetadata();
  ~ZombieVillagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isConverting = false;
  VillagerData villagerData {MINECRAFT_PLAINS, MINECRAFT_NONE, 1};
};
