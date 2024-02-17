#pragma once

#include "item.h"

class MilkBucketItem : public Item {
 public:
  MilkBucketItem();
  ~MilkBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
