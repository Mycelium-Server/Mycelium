#pragma once

#include "item.h"

class MuleSpawnEggItem : public Item {
 public:
  MuleSpawnEggItem();
  ~MuleSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
