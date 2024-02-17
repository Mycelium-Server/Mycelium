#pragma once

#include "item.h"

class VillagerSpawnEggItem : public Item {
 public:
  VillagerSpawnEggItem();
  ~VillagerSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
