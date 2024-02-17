#pragma once

#include "item.h"

class DiamondAxeItem : public Item {
 public:
  DiamondAxeItem();
  ~DiamondAxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
