#pragma once

#include "item.h"

class DiamondSwordItem : public Item {
 public:
  DiamondSwordItem();
  ~DiamondSwordItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
