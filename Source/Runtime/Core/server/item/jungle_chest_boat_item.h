#pragma once

#include "item.h"

class JungleChestBoatItem : public Item {
 public:
  JungleChestBoatItem();
  ~JungleChestBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
