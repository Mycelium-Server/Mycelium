#pragma once

#include "item.h"

class SalmonBucketItem : public Item {
 public:
  SalmonBucketItem();
  ~SalmonBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
