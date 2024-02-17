#pragma once

#include "item.h"

class SkeletonSpawnEggItem : public Item {
 public:
  SkeletonSpawnEggItem();
  ~SkeletonSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
