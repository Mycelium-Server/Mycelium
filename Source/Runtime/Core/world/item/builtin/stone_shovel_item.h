#pragma once

#include "item.h"

class StoneShovelItem : public Item {
 public:
  StoneShovelItem();
  ~StoneShovelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
