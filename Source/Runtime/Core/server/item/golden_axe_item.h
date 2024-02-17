#pragma once

#include "item.h"

class GoldenAxeItem : public Item {
 public:
  GoldenAxeItem();
  ~GoldenAxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
