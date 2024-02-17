#pragma once

#include "item.h"

class SlimeSpawnEggItem : public Item {
 public:
  SlimeSpawnEggItem();
  ~SlimeSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
