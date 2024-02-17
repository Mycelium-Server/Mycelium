#pragma once

#include "item.h"

class GlowBerriesItem : public Item {
 public:
  GlowBerriesItem();
  ~GlowBerriesItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
