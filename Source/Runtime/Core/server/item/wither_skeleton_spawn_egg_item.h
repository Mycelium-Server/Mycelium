#pragma once

#include "item.h"

class WitherSkeletonSpawnEggItem : public Item {
 public:
  WitherSkeletonSpawnEggItem();
  ~WitherSkeletonSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
