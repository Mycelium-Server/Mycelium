#pragma once

#include "item.h"

class WardenSpawnEggItem : public Item {
 public:
  WardenSpawnEggItem();
  ~WardenSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
