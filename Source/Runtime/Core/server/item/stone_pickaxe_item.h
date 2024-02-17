#pragma once

#include "item.h"

class StonePickaxeItem : public Item {
 public:
  StonePickaxeItem();
  ~StonePickaxeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
