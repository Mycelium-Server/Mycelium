#pragma once

#include "item.h"

class ZombieVillagerSpawnEggItem : public Item {
 public:
  ZombieVillagerSpawnEggItem();
  ~ZombieVillagerSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
