#pragma once

#include "item.h"

class BirchChestBoatItem : public Item {
 public:
  BirchChestBoatItem();
  ~BirchChestBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
