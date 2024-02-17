#pragma once

#include "item.h"

class DrownedSpawnEggItem : public Item {
 public:
  DrownedSpawnEggItem();
  ~DrownedSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
