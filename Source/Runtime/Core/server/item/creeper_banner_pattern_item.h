#pragma once

#include "item.h"

class CreeperBannerPatternItem : public Item {
 public:
  CreeperBannerPatternItem();
  ~CreeperBannerPatternItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
