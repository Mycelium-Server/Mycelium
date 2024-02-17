#pragma once

#include "item.h"

class CookedChickenItem : public Item {
 public:
  CookedChickenItem();
  ~CookedChickenItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
