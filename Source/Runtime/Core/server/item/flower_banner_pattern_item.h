#pragma once

#include "item.h"

class FlowerBannerPatternItem : public Item {
 public:
  FlowerBannerPatternItem();
  ~FlowerBannerPatternItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
