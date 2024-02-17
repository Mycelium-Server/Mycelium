#pragma once

#include "item.h"

class GoldIngotItem : public Item {
 public:
  GoldIngotItem();
  ~GoldIngotItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
