#pragma once

#include "item.h"

class BreadItem : public Item {
 public:
  BreadItem();
  ~BreadItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
