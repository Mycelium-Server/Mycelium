#pragma once

#include "item.h"

class BeetrootSoupItem : public Item {
 public:
  BeetrootSoupItem();
  ~BeetrootSoupItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
