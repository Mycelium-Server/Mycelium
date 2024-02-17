#pragma once

#include "item.h"

class BlueDyeItem : public Item {
 public:
  BlueDyeItem();
  ~BlueDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
