#pragma once

#include "item.h"

class GoldenChestplateItem : public Item {
 public:
  GoldenChestplateItem();
  ~GoldenChestplateItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
