#pragma once

#include "item.h"

class NetheriteSwordItem : public Item {
 public:
  NetheriteSwordItem();
  ~NetheriteSwordItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
