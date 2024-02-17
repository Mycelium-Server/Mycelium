#pragma once

#include "item.h"

class OakBoatItem : public Item {
 public:
  OakBoatItem();
  ~OakBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
