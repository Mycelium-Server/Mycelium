#pragma once

#include "item.h"

class ArmorStandItem : public Item {
 public:
  ArmorStandItem();
  ~ArmorStandItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
