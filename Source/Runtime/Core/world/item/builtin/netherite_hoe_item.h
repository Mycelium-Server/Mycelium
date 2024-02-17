#pragma once

#include "item.h"

class NetheriteHoeItem : public Item {
 public:
  NetheriteHoeItem();
  ~NetheriteHoeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
