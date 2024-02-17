#pragma once

#include "item.h"

class ChickenSpawnEggItem : public Item {
 public:
  ChickenSpawnEggItem();
  ~ChickenSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
