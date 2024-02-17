#pragma once

#include "item.h"

class WoodenAxeItem : public Item {
 public:
  WoodenAxeItem();
  ~WoodenAxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
