#pragma once

#include "item.h"

class LeatherChestplateItem : public Item {
 public:
  LeatherChestplateItem();
  ~LeatherChestplateItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
