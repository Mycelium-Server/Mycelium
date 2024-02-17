#pragma once

#include "item.h"

class SilverfishSpawnEggItem : public Item {
 public:
  SilverfishSpawnEggItem();
  ~SilverfishSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
