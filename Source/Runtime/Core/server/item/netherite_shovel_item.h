#pragma once

#include "item.h"

class NetheriteShovelItem : public Item {
 public:
  NetheriteShovelItem();
  ~NetheriteShovelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
