#pragma once

#include "item.h"

class IronChestplateItem : public Item {
 public:
  IronChestplateItem();
  ~IronChestplateItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
