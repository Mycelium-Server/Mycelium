#pragma once

#include "item.h"

class WoodenPickaxeItem : public Item {
 public:
  WoodenPickaxeItem();
  ~WoodenPickaxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
