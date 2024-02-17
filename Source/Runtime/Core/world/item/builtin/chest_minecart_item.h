#pragma once

#include "item.h"

class ChestMinecartItem : public Item {
 public:
  ChestMinecartItem();
  ~ChestMinecartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
