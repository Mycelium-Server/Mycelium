#pragma once

#include "item.h"

class HoneyBottleItem : public Item {
 public:
  HoneyBottleItem();
  ~HoneyBottleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
