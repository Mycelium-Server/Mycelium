#pragma once

#include "item.h"

class DragonBreathItem : public Item {
 public:
  DragonBreathItem();
  ~DragonBreathItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
