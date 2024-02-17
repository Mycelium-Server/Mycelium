#pragma once

#include "item.h"

class MelonSeedsItem : public Item {
 public:
  MelonSeedsItem();
  ~MelonSeedsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
