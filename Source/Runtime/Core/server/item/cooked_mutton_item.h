#pragma once

#include "item.h"

class CookedMuttonItem : public Item {
 public:
  CookedMuttonItem();
  ~CookedMuttonItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
