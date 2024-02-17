#pragma once

#include "item.h"

class NetheriteChestplateItem : public Item {
 public:
  NetheriteChestplateItem();
  ~NetheriteChestplateItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
