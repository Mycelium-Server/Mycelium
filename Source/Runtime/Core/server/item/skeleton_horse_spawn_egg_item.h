#pragma once

#include "item.h"

class SkeletonHorseSpawnEggItem : public Item {
 public:
  SkeletonHorseSpawnEggItem();
  ~SkeletonHorseSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
