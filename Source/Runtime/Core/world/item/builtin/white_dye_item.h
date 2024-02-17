#pragma once

#include "item.h"

class WhiteDyeItem : public Item {
 public:
  WhiteDyeItem();
  ~WhiteDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
