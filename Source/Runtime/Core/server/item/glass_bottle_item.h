#pragma once

#include "item.h"

class GlassBottleItem : public Item {
 public:
  GlassBottleItem();
  ~GlassBottleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
