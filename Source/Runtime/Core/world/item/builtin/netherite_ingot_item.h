#pragma once

#include "item.h"

class NetheriteIngotItem : public Item {
 public:
  NetheriteIngotItem();
  ~NetheriteIngotItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
