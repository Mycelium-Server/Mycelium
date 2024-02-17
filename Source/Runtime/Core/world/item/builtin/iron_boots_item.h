#pragma once

#include "item.h"

class IronBootsItem : public Item {
 public:
  IronBootsItem();
  ~IronBootsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
