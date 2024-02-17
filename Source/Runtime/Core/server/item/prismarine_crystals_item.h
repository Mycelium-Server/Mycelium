#pragma once

#include "item.h"

class PrismarineCrystalsItem : public Item {
 public:
  PrismarineCrystalsItem();
  ~PrismarineCrystalsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
