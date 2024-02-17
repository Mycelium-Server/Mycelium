#pragma once

#include "item.h"

class MangroveChestBoatItem : public Item {
 public:
  MangroveChestBoatItem();
  ~MangroveChestBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
