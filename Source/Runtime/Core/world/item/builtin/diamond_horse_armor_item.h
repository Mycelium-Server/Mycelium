#pragma once

#include "item.h"

class DiamondHorseArmorItem : public Item {
 public:
  DiamondHorseArmorItem();
  ~DiamondHorseArmorItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
