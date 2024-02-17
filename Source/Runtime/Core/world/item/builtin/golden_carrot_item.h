#pragma once

#include "item.h"

class GoldenCarrotItem : public Item {
 public:
  GoldenCarrotItem();
  ~GoldenCarrotItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
