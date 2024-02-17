#pragma once

#include "item.h"

class FlintItem : public Item {
 public:
  FlintItem();
  ~FlintItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
