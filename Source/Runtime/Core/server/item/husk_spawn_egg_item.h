#pragma once

#include "item.h"

class HuskSpawnEggItem : public Item {
 public:
  HuskSpawnEggItem();
  ~HuskSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
