#pragma once

#include "item.h"

class GoldenAppleItem : public Item {
 public:
  GoldenAppleItem();
  ~GoldenAppleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
