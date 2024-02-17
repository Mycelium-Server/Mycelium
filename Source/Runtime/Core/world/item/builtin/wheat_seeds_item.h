#pragma once

#include "item.h"

class WheatSeedsItem : public Item {
 public:
  WheatSeedsItem();
  ~WheatSeedsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
