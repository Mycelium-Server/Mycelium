#pragma once

#include "item.h"

class TippedArrowItem : public Item {
 public:
  TippedArrowItem();
  ~TippedArrowItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
