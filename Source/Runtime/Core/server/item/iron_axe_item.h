#pragma once

#include "item.h"

class IronAxeItem : public Item {
 public:
  IronAxeItem();
  ~IronAxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
