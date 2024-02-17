#pragma once

#include "item.h"

class StickItem : public Item {
 public:
  StickItem();
  ~StickItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
