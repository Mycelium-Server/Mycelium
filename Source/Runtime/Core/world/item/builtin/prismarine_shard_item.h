#pragma once

#include "item.h"

class PrismarineShardItem : public Item {
 public:
  PrismarineShardItem();
  ~PrismarineShardItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
