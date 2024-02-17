#pragma once

#include "item.h"

class FireworkRocketItem : public Item {
 public:
  FireworkRocketItem();
  ~FireworkRocketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
