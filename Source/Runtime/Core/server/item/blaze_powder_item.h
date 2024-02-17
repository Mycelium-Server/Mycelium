#pragma once

#include "item.h"

class BlazePowderItem : public Item {
 public:
  BlazePowderItem();
  ~BlazePowderItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
