#pragma once

#include "item.h"

class EndermanSpawnEggItem : public Item {
 public:
  EndermanSpawnEggItem();
  ~EndermanSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
