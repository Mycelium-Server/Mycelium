#pragma once

#include "item.h"

class GlobeBannerPatternItem : public Item {
 public:
  GlobeBannerPatternItem();
  ~GlobeBannerPatternItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
