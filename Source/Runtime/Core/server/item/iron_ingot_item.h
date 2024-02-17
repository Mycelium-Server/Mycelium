#pragma once

#include "item.h"

class IronIngotItem : public Item {
 public:
  IronIngotItem();
  ~IronIngotItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
