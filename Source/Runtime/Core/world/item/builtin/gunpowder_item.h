#pragma once

#include "item.h"

class GunpowderItem : public Item {
 public:
  GunpowderItem();
  ~GunpowderItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
