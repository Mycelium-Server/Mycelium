#pragma once

#include "item.h"

class EvokerSpawnEggItem : public Item {
 public:
  EvokerSpawnEggItem();
  ~EvokerSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
