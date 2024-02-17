#pragma once

#include "item.h"

class HeartOfTheSeaItem : public Item {
 public:
  HeartOfTheSeaItem();
  ~HeartOfTheSeaItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
