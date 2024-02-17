#pragma once

#include "item.h"

class RavagerSpawnEggItem : public Item {
 public:
  RavagerSpawnEggItem();
  ~RavagerSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
