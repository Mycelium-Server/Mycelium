#pragma once

#include "item.h"

class CoalItem : public Item {
 public:
  CoalItem();
  ~CoalItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
