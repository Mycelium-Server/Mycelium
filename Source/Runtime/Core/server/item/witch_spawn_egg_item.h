#pragma once

#include "item.h"

class WitchSpawnEggItem : public Item {
 public:
  WitchSpawnEggItem();
  ~WitchSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
