#pragma once

#include "item.h"

class ChorusFruitItem : public Item {
 public:
  ChorusFruitItem();
  ~ChorusFruitItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
