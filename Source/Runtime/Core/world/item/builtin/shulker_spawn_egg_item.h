#pragma once

#include "item.h"

class ShulkerSpawnEggItem : public Item {
 public:
  ShulkerSpawnEggItem();
  ~ShulkerSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
