#pragma once

#include "item.h"

class LeatherItem : public Item {
 public:
  LeatherItem();
  ~LeatherItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
