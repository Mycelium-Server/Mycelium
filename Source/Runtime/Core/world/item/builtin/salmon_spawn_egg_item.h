#pragma once

#include "item.h"

class SalmonSpawnEggItem : public Item {
 public:
  SalmonSpawnEggItem();
  ~SalmonSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
