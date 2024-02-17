#pragma once

#include "item.h"

class FireChargeItem : public Item {
 public:
  FireChargeItem();
  ~FireChargeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
