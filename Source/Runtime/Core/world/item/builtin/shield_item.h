#pragma once

#include "item.h"

class ShieldItem : public Item {
 public:
  ShieldItem();
  ~ShieldItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
