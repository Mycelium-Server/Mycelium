#pragma once

#include "item.h"

class CodSpawnEggItem : public Item {
 public:
  CodSpawnEggItem();
  ~CodSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
