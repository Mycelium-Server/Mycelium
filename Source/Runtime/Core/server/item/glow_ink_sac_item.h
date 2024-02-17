#pragma once

#include "item.h"

class GlowInkSacItem : public Item {
 public:
  GlowInkSacItem();
  ~GlowInkSacItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
