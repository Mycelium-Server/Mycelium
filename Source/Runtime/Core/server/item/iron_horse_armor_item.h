#pragma once

#include "item.h"

class IronHorseArmorItem : public Item {
 public:
  IronHorseArmorItem();
  ~IronHorseArmorItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
