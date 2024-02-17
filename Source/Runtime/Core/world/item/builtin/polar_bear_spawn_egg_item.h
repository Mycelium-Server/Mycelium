#pragma once

#include "item.h"

class PolarBearSpawnEggItem : public Item {
 public:
  PolarBearSpawnEggItem();
  ~PolarBearSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
