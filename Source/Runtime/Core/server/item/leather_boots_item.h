#pragma once

#include "item.h"

class LeatherBootsItem : public Item {
 public:
  LeatherBootsItem();
  ~LeatherBootsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
