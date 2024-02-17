#pragma once

#include "item.h"

class StriderSpawnEggItem : public Item {
 public:
  StriderSpawnEggItem();
  ~StriderSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
