#pragma once

#include "item.h"

class AcaciaChestBoatItem : public Item {
 public:
  AcaciaChestBoatItem();
  ~AcaciaChestBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
