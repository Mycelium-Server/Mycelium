#pragma once

#include "item.h"

class SpruceChestBoatItem : public Item {
 public:
  SpruceChestBoatItem();
  ~SpruceChestBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
