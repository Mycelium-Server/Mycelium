#pragma once

#include "item.h"

class BeefItem : public Item {
 public:
  BeefItem();
  ~BeefItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
