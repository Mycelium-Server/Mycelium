#pragma once

#include "item.h"

class BlazeSpawnEggItem : public Item {
 public:
  BlazeSpawnEggItem();
  ~BlazeSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
