#pragma once

#include "item.h"

class PaintingItem : public Item {
 public:
  PaintingItem();
  ~PaintingItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
