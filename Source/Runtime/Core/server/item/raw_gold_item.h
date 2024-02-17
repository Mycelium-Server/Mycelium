#pragma once

#include "item.h"

class RawGoldItem : public Item {
 public:
  RawGoldItem();
  ~RawGoldItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
