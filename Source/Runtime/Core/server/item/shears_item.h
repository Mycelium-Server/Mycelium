#pragma once

#include "item.h"

class ShearsItem : public Item {
 public:
  ShearsItem();
  ~ShearsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
