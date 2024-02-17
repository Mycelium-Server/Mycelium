#pragma once

#include "item.h"

class LeatherHorseArmorItem : public Item {
 public:
  LeatherHorseArmorItem();
  ~LeatherHorseArmorItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
