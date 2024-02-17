#pragma once

#include "item.h"

class CreeperSpawnEggItem : public Item {
 public:
  CreeperSpawnEggItem();
  ~CreeperSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
