#pragma once

#include "item.h"

class AllaySpawnEggItem : public Item {
 public:
  AllaySpawnEggItem();
  ~AllaySpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
