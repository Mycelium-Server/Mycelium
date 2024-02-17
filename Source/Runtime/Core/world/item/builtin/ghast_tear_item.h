#pragma once

#include "item.h"

class GhastTearItem : public Item {
 public:
  GhastTearItem();
  ~GhastTearItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
