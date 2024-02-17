#pragma once

#include "item.h"

class SugarItem : public Item {
 public:
  SugarItem();
  ~SugarItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
