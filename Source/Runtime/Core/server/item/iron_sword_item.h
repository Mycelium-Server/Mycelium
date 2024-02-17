#pragma once

#include "item.h"

class IronSwordItem : public Item {
 public:
  IronSwordItem();
  ~IronSwordItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
