#pragma once

#include "item.h"

class HoneycombItem : public Item {
 public:
  HoneycombItem();
  ~HoneycombItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
