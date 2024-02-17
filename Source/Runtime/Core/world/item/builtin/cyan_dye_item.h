#pragma once

#include "item.h"

class CyanDyeItem : public Item {
 public:
  CyanDyeItem();
  ~CyanDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
