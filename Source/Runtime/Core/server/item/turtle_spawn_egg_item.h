#pragma once

#include "item.h"

class TurtleSpawnEggItem : public Item {
 public:
  TurtleSpawnEggItem();
  ~TurtleSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
