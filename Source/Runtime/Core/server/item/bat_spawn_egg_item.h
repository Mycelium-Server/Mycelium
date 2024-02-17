#pragma once

#include "item.h"

class BatSpawnEggItem : public Item {
 public:
  BatSpawnEggItem();
  ~BatSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
