#pragma once

#include "item.h"

class GoatSpawnEggItem : public Item {
 public:
  GoatSpawnEggItem();
  ~GoatSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
