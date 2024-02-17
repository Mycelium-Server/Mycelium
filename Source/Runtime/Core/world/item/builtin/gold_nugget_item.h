#pragma once

#include "item.h"

class GoldNuggetItem : public Item {
 public:
  GoldNuggetItem();
  ~GoldNuggetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
