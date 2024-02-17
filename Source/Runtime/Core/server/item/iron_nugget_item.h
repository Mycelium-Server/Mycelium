#pragma once

#include "item.h"

class IronNuggetItem : public Item {
 public:
  IronNuggetItem();
  ~IronNuggetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
