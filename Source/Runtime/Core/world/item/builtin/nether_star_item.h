#pragma once

#include "item.h"

class NetherStarItem : public Item {
 public:
  NetherStarItem();
  ~NetherStarItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
