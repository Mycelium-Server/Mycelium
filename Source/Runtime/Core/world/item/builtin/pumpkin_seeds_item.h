#pragma once

#include "item.h"

class PumpkinSeedsItem : public Item {
 public:
  PumpkinSeedsItem();
  ~PumpkinSeedsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
