#pragma once

#include "item.h"

class MinecartItem : public Item {
 public:
  MinecartItem();
  ~MinecartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
