#pragma once

#include "item.h"

class IronShovelItem : public Item {
 public:
  IronShovelItem();
  ~IronShovelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
