#pragma once

#include "item.h"

class GoldenLeggingsItem : public Item {
 public:
  GoldenLeggingsItem();
  ~GoldenLeggingsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
