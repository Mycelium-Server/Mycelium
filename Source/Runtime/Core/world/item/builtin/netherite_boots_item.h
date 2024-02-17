#pragma once

#include "item.h"

class NetheriteBootsItem : public Item {
 public:
  NetheriteBootsItem();
  ~NetheriteBootsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
