#pragma once

#include "item.h"

class FeatherItem : public Item {
 public:
  FeatherItem();
  ~FeatherItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
