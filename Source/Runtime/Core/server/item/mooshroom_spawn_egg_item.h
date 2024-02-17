#pragma once

#include "item.h"

class MooshroomSpawnEggItem : public Item {
 public:
  MooshroomSpawnEggItem();
  ~MooshroomSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
