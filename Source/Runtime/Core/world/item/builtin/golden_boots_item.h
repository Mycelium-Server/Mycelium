#pragma once

#include "item.h"

class GoldenBootsItem : public Item {
 public:
  GoldenBootsItem();
  ~GoldenBootsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
