#pragma once

#include "item.h"

class PiglinBruteSpawnEggItem : public Item {
 public:
  PiglinBruteSpawnEggItem();
  ~PiglinBruteSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
