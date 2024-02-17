#pragma once

#include "item.h"

class RedDyeItem : public Item {
 public:
  RedDyeItem();
  ~RedDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
