#pragma once

#include "item.h"

class GlisteringMelonSliceItem : public Item {
 public:
  GlisteringMelonSliceItem();
  ~GlisteringMelonSliceItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
