#pragma once

#include "item.h"

class FurnaceMinecartItem : public Item {
 public:
  FurnaceMinecartItem();
  ~FurnaceMinecartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
