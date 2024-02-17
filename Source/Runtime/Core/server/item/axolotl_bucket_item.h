#pragma once

#include "item.h"

class AxolotlBucketItem : public Item {
 public:
  AxolotlBucketItem();
  ~AxolotlBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
