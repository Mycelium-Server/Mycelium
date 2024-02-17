#pragma once

#include "item.h"

class AirItem : public Item {
 public:
  AirItem();
  ~AirItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
