#pragma once

#include "item.h"

class WaterBucketItem : public Item {
 public:
  WaterBucketItem();
  ~WaterBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
