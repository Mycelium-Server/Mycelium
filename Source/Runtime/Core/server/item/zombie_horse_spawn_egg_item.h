#pragma once

#include "item.h"

class ZombieHorseSpawnEggItem : public Item {
 public:
  ZombieHorseSpawnEggItem();
  ~ZombieHorseSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
