#pragma once

#include "item.h"

class DiamondHoeItem : public Item {
 public:
  DiamondHoeItem();
  ~DiamondHoeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
