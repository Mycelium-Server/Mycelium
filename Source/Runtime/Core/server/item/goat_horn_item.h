#pragma once

#include "item.h"

class GoatHornItem : public Item {
 public:
  GoatHornItem();
  ~GoatHornItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
