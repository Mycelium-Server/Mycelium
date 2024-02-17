#pragma once

#include "item.h"

class PhantomSpawnEggItem : public Item {
 public:
  PhantomSpawnEggItem();
  ~PhantomSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
