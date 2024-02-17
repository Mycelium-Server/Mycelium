#pragma once

#include "item.h"

class IronLeggingsItem : public Item {
 public:
  IronLeggingsItem();
  ~IronLeggingsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
