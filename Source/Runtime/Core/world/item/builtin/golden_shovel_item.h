#pragma once

#include "item.h"

class GoldenShovelItem : public Item {
 public:
  GoldenShovelItem();
  ~GoldenShovelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
