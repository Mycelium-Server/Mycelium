#pragma once

#include "item.h"

class WoodenShovelItem : public Item {
 public:
  WoodenShovelItem();
  ~WoodenShovelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
