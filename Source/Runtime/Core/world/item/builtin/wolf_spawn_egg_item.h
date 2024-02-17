#pragma once

#include "item.h"

class WolfSpawnEggItem : public Item {
 public:
  WolfSpawnEggItem();
  ~WolfSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
