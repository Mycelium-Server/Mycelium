#pragma once

#include "item.h"

class BeetrootItem : public Item {
 public:
  BeetrootItem();
  ~BeetrootItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
