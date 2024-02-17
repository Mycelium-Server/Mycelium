#pragma once

#include "item.h"

class MojangBannerPatternItem : public Item {
 public:
  MojangBannerPatternItem();
  ~MojangBannerPatternItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
