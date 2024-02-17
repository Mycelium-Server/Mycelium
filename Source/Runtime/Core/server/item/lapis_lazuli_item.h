#pragma once

#include "item.h"

class LapisLazuliItem : public Item {
 public:
  LapisLazuliItem();
  ~LapisLazuliItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
