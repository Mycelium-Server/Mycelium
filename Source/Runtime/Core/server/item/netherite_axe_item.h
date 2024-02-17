#pragma once

#include "item.h"

class NetheriteAxeItem : public Item {
 public:
  NetheriteAxeItem();
  ~NetheriteAxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
