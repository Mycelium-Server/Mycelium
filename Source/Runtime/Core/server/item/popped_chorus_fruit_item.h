#pragma once

#include "item.h"

class PoppedChorusFruitItem : public Item {
 public:
  PoppedChorusFruitItem();
  ~PoppedChorusFruitItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
