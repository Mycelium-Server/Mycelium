#pragma once

#include "item.h"

class CookedSalmonItem : public Item {
 public:
  CookedSalmonItem();
  ~CookedSalmonItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
