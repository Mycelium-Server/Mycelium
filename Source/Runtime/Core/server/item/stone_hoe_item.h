#pragma once

#include "item.h"

class StoneHoeItem : public Item {
 public:
  StoneHoeItem();
  ~StoneHoeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
