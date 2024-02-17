#pragma once

#include "item.h"

class DarkOakChestBoatItem : public Item {
 public:
  DarkOakChestBoatItem();
  ~DarkOakChestBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
