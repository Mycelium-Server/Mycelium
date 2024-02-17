#pragma once

#include "item.h"

class SquidSpawnEggItem : public Item {
 public:
  SquidSpawnEggItem();
  ~SquidSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
