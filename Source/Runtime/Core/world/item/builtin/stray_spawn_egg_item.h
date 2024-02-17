#pragma once

#include "item.h"

class StraySpawnEggItem : public Item {
 public:
  StraySpawnEggItem();
  ~StraySpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
