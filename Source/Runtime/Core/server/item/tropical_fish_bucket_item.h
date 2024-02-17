#pragma once

#include "item.h"

class TropicalFishBucketItem : public Item {
 public:
  TropicalFishBucketItem();
  ~TropicalFishBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
