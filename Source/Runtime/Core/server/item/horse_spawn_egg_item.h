#pragma once

#include "item.h"

class HorseSpawnEggItem : public Item {
 public:
  HorseSpawnEggItem();
  ~HorseSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
