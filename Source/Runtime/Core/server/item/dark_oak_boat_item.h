#pragma once

#include "item.h"

class DarkOakBoatItem : public Item {
 public:
  DarkOakBoatItem();
  ~DarkOakBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
