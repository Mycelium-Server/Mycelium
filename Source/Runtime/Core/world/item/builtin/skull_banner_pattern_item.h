#pragma once

#include "item.h"

class SkullBannerPatternItem : public Item {
 public:
  SkullBannerPatternItem();
  ~SkullBannerPatternItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
