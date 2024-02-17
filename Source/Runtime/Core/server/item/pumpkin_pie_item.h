#pragma once

#include "item.h"

class PumpkinPieItem : public Item {
 public:
  PumpkinPieItem();
  ~PumpkinPieItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
