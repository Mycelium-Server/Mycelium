#pragma once

#include "item.h"

class SnowballItem : public Item {
 public:
  SnowballItem();
  ~SnowballItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
