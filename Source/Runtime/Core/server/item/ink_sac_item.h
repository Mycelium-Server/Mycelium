#pragma once

#include "item.h"

class InkSacItem : public Item {
 public:
  InkSacItem();
  ~InkSacItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
