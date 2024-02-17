#pragma once

#include "item.h"

class PillagerSpawnEggItem : public Item {
 public:
  PillagerSpawnEggItem();
  ~PillagerSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
