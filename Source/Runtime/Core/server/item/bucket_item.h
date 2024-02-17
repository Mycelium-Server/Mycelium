#pragma once

#include "item.h"

class BucketItem : public Item {
 public:
  BucketItem();
  ~BucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
