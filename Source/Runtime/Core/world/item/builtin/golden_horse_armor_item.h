#pragma once

#include "item.h"

class GoldenHorseArmorItem : public Item {
 public:
  GoldenHorseArmorItem();
  ~GoldenHorseArmorItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
