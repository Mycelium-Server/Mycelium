#pragma once

#include "item.h"

class NetheritePickaxeItem : public Item {
 public:
  NetheritePickaxeItem();
  ~NetheritePickaxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
