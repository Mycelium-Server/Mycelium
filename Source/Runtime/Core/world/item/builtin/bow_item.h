#pragma once

#include "item.h"

class BowItem : public Item {
 public:
  BowItem();
  ~BowItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
