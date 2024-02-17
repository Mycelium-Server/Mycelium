#pragma once

#include "item.h"

class GlowItemFrameItem : public Item {
 public:
  GlowItemFrameItem();
  ~GlowItemFrameItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
