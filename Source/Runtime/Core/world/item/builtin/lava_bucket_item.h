#pragma once

#include "item.h"

class LavaBucketItem : public Item {
 public:
  LavaBucketItem();
  ~LavaBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
