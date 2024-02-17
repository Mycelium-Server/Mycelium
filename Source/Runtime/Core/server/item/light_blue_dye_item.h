#pragma once

#include "item.h"

class LightBlueDyeItem : public Item {
 public:
  LightBlueDyeItem();
  ~LightBlueDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
