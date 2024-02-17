#pragma once

#include "item.h"

class SweetBerriesItem : public Item {
 public:
  SweetBerriesItem();
  ~SweetBerriesItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
