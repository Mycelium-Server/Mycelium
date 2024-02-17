#pragma once

#include "item.h"

class NetheriteLeggingsItem : public Item {
 public:
  NetheriteLeggingsItem();
  ~NetheriteLeggingsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
