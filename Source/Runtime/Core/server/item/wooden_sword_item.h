#pragma once

#include "item.h"

class WoodenSwordItem : public Item {
 public:
  WoodenSwordItem();
  ~WoodenSwordItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
