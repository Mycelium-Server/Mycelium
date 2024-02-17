#pragma once

#include "item.h"

class SheepSpawnEggItem : public Item {
 public:
  SheepSpawnEggItem();
  ~SheepSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
