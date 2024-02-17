#pragma once

#include "item.h"

class BeetrootSeedsItem : public Item {
 public:
  BeetrootSeedsItem();
  ~BeetrootSeedsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
