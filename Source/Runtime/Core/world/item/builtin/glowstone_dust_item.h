#pragma once

#include "item.h"

class GlowstoneDustItem : public Item {
 public:
  GlowstoneDustItem();
  ~GlowstoneDustItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
