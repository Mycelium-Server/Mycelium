#pragma once

#include "item.h"

class YellowDyeItem : public Item {
 public:
  YellowDyeItem();
  ~YellowDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
