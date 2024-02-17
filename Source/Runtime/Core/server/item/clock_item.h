#pragma once

#include "item.h"

class ClockItem : public Item {
 public:
  ClockItem();
  ~ClockItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
