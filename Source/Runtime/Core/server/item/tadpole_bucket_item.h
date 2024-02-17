#pragma once

#include "item.h"

class TadpoleBucketItem : public Item {
 public:
  TadpoleBucketItem();
  ~TadpoleBucketItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
