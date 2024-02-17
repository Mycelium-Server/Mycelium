#pragma once

#include "item.h"

class ArrowItem : public Item {
 public:
  ArrowItem();
  ~ArrowItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
