#pragma once

#include "item.h"

class BrownDyeItem : public Item {
 public:
  BrownDyeItem();
  ~BrownDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
