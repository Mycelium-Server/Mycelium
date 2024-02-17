#pragma once

#include "item.h"

class StoneSwordItem : public Item {
 public:
  StoneSwordItem();
  ~StoneSwordItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
