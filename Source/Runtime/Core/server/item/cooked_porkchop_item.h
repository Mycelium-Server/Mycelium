#pragma once

#include "item.h"

class CookedPorkchopItem : public Item {
 public:
  CookedPorkchopItem();
  ~CookedPorkchopItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
