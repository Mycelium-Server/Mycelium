#pragma once

#include "item.h"

class FishingRodItem : public Item {
 public:
  FishingRodItem();
  ~FishingRodItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
