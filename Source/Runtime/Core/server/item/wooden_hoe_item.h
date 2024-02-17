#pragma once

#include "item.h"

class WoodenHoeItem : public Item {
 public:
  WoodenHoeItem();
  ~WoodenHoeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
