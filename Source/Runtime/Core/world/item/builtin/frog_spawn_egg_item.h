#pragma once

#include "item.h"

class FrogSpawnEggItem : public Item {
 public:
  FrogSpawnEggItem();
  ~FrogSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
