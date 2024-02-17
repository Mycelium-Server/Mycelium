#pragma once

#include "item.h"

class DiamondChestplateItem : public Item {
 public:
  DiamondChestplateItem();
  ~DiamondChestplateItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
