#pragma once

#include "item.h"

class MelonSliceItem : public Item {
 public:
  MelonSliceItem();
  ~MelonSliceItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
