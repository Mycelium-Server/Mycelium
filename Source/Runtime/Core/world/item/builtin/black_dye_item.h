#pragma once

#include "item.h"

class BlackDyeItem : public Item {
 public:
  BlackDyeItem();
  ~BlackDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
