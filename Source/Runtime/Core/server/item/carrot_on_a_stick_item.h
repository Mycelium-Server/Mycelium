#pragma once

#include "item.h"

class CarrotOnAStickItem : public Item {
 public:
  CarrotOnAStickItem();
  ~CarrotOnAStickItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
