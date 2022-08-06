#pragma once

#include "zombie_metadata.h"

class ZombieVillagerMetadata : public ZombieMetadata {
 public:
  ZombieVillagerMetadata();
  ~ZombieVillagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  VillagerData villagerData {MINECRAFT_PLAINS, MINECRAFT_NONE, 1};
};