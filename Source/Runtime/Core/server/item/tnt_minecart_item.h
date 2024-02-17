#pragma once

#include "item.h"

class TntMinecartItem : public Item {
 public:
  TntMinecartItem();
  ~TntMinecartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
