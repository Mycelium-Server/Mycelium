#pragma once

#include "item.h"

class DiamondHelmetItem : public Item {
 public:
  DiamondHelmetItem();
  ~DiamondHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
