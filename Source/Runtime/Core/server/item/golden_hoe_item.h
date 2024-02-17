#pragma once

#include "item.h"

class GoldenHoeItem : public Item {
 public:
  GoldenHoeItem();
  ~GoldenHoeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
