#pragma once

#include "item.h"

class BowlItem : public Item {
 public:
  BowlItem();
  ~BowlItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
