#pragma once

#include "item.h"

class CodBucketItem : public Item {
 public:
  CodBucketItem();
  ~CodBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
