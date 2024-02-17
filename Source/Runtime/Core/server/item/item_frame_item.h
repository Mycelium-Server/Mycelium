#pragma once

#include "item.h"

class ItemFrameItem : public Item {
 public:
  ItemFrameItem();
  ~ItemFrameItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
