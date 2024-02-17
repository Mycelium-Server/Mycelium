#pragma once

#include "item.h"

class SpyglassItem : public Item {
 public:
  SpyglassItem();
  ~SpyglassItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
