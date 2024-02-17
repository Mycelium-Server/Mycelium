#pragma once

#include "item.h"

class GrayDyeItem : public Item {
 public:
  GrayDyeItem();
  ~GrayDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
