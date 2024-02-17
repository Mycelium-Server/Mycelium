#pragma once

#include "item.h"

class SaddleItem : public Item {
 public:
  SaddleItem();
  ~SaddleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
