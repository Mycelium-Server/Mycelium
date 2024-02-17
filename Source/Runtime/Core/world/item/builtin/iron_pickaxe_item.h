#pragma once

#include "item.h"

class IronPickaxeItem : public Item {
 public:
  IronPickaxeItem();
  ~IronPickaxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
