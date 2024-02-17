#pragma once

#include "item.h"

class GreenDyeItem : public Item {
 public:
  GreenDyeItem();
  ~GreenDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
