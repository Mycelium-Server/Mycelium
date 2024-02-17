#pragma once

#include "item.h"

class ZombieSpawnEggItem : public Item {
 public:
  ZombieSpawnEggItem();
  ~ZombieSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
