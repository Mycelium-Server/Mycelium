#pragma once

#include "item.h"

class IronHoeItem : public Item {
 public:
  IronHoeItem();
  ~IronHoeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
