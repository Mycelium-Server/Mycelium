#pragma once

#include "item.h"

class MangroveBoatItem : public Item {
 public:
  MangroveBoatItem();
  ~MangroveBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
