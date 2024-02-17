#pragma once

#include "item.h"

class DiamondItem : public Item {
 public:
  DiamondItem();
  ~DiamondItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
