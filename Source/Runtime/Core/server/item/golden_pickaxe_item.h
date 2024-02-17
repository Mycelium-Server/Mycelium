#pragma once

#include "item.h"

class GoldenPickaxeItem : public Item {
 public:
  GoldenPickaxeItem();
  ~GoldenPickaxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
