#pragma once

#include "item.h"

class DebugStickItem : public Item {
 public:
  DebugStickItem();
  ~DebugStickItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
