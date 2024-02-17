#pragma once

#include "item.h"

class StoneAxeItem : public Item {
 public:
  StoneAxeItem();
  ~StoneAxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
