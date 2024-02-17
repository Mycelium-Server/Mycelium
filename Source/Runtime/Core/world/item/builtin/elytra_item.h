#pragma once

#include "item.h"

class ElytraItem : public Item {
 public:
  ElytraItem();
  ~ElytraItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
