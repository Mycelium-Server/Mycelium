#pragma once

#include "item.h"

class CowSpawnEggItem : public Item {
 public:
  CowSpawnEggItem();
  ~CowSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
