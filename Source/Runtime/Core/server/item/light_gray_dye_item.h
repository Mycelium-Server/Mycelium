#pragma once

#include "item.h"

class LightGrayDyeItem : public Item {
 public:
  LightGrayDyeItem();
  ~LightGrayDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
