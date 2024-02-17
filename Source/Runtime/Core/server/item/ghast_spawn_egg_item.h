#pragma once

#include "item.h"

class GhastSpawnEggItem : public Item {
 public:
  GhastSpawnEggItem();
  ~GhastSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
