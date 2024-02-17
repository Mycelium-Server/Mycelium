#pragma once

#include "item.h"

class PowderSnowBucketItem : public Item {
 public:
  PowderSnowBucketItem();
  ~PowderSnowBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
