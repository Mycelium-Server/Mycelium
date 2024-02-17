#pragma once

#include "item.h"

class RottenFleshItem : public Item {
 public:
  RottenFleshItem();
  ~RottenFleshItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
