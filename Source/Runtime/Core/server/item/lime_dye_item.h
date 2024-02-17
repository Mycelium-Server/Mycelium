#pragma once

#include "item.h"

class LimeDyeItem : public Item {
 public:
  LimeDyeItem();
  ~LimeDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
