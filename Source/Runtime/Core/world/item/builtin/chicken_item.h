#pragma once

#include "item.h"

class ChickenItem : public Item {
 public:
  ChickenItem();
  ~ChickenItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
