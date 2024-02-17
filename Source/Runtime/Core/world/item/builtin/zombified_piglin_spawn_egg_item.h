#pragma once

#include "item.h"

class ZombifiedPiglinSpawnEggItem : public Item {
 public:
  ZombifiedPiglinSpawnEggItem();
  ~ZombifiedPiglinSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
