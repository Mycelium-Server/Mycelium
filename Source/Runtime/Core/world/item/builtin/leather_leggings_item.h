#pragma once

#include "item.h"

class LeatherLeggingsItem : public Item {
 public:
  LeatherLeggingsItem();
  ~LeatherLeggingsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
