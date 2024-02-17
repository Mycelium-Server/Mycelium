#pragma once

#include "item.h"

class HoglinSpawnEggItem : public Item {
 public:
  HoglinSpawnEggItem();
  ~HoglinSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
