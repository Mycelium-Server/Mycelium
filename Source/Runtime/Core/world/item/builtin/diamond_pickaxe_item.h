#pragma once

#include "item.h"

class DiamondPickaxeItem : public Item {
 public:
  DiamondPickaxeItem();
  ~DiamondPickaxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
