#pragma once

#include "item.h"

class PigSpawnEggItem : public Item {
 public:
  PigSpawnEggItem();
  ~PigSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
