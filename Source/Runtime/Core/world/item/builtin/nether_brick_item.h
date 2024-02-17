#pragma once

#include "item.h"

class NetherBrickItem : public Item {
 public:
  NetherBrickItem();
  ~NetherBrickItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
