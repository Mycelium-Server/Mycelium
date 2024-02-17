#pragma once

#include "item.h"

class GoldenSwordItem : public Item {
 public:
  GoldenSwordItem();
  ~GoldenSwordItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
