#pragma once

#include "item.h"

class BeeSpawnEggItem : public Item {
 public:
  BeeSpawnEggItem();
  ~BeeSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
