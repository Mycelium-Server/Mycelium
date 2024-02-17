#pragma once

#include "item.h"

class CarrotItem : public Item {
 public:
  CarrotItem();
  ~CarrotItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
