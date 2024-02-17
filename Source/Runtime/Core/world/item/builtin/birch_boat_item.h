#pragma once

#include "item.h"

class BirchBoatItem : public Item {
 public:
  BirchBoatItem();
  ~BirchBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
