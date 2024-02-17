#pragma once

#include "item.h"

class BoneMealItem : public Item {
 public:
  BoneMealItem();
  ~BoneMealItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
