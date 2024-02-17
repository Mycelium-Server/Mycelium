#pragma once

#include "item.h"

class CookedBeefItem : public Item {
 public:
  CookedBeefItem();
  ~CookedBeefItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
