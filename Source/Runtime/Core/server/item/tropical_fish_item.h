#pragma once

#include "item.h"

class TropicalFishItem : public Item {
 public:
  TropicalFishItem();
  ~TropicalFishItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
