#pragma once

#include "item.h"

class BrickItem : public Item {
 public:
  BrickItem();
  ~BrickItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
