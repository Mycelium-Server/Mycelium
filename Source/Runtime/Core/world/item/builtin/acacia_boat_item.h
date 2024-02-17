#pragma once

#include "item.h"

class AcaciaBoatItem : public Item {
 public:
  AcaciaBoatItem();
  ~AcaciaBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
