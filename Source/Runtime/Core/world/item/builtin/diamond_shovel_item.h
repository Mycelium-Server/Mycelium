#pragma once

#include "item.h"

class DiamondShovelItem : public Item {
 public:
  DiamondShovelItem();
  ~DiamondShovelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
