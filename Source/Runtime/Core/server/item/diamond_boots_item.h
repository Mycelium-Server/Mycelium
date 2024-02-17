#pragma once

#include "item.h"

class DiamondBootsItem : public Item {
 public:
  DiamondBootsItem();
  ~DiamondBootsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
