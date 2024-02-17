#pragma once

#include "item.h"

class SalmonItem : public Item {
 public:
  SalmonItem();
  ~SalmonItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
