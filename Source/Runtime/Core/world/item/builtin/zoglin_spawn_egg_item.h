#pragma once

#include "item.h"

class ZoglinSpawnEggItem : public Item {
 public:
  ZoglinSpawnEggItem();
  ~ZoglinSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
