#pragma once

#include "item.h"

class PiglinSpawnEggItem : public Item {
 public:
  PiglinSpawnEggItem();
  ~PiglinSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
