#pragma once

#include "item.h"

class PufferfishBucketItem : public Item {
 public:
  PufferfishBucketItem();
  ~PufferfishBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
