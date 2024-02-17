#pragma once

#include "item.h"

class HopperMinecartItem : public Item {
 public:
  HopperMinecartItem();
  ~HopperMinecartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
