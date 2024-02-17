#pragma once

#include "item.h"

class DiamondLeggingsItem : public Item {
 public:
  DiamondLeggingsItem();
  ~DiamondLeggingsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
