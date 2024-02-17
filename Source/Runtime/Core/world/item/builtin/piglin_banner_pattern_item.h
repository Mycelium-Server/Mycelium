#pragma once

#include "item.h"

class PiglinBannerPatternItem : public Item {
 public:
  PiglinBannerPatternItem();
  ~PiglinBannerPatternItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
