#pragma once

#include "item.h"

class PorkchopItem : public Item {
 public:
  PorkchopItem();
  ~PorkchopItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
