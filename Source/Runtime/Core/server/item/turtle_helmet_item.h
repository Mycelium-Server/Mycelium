#pragma once

#include "item.h"

class TurtleHelmetItem : public Item {
 public:
  TurtleHelmetItem();
  ~TurtleHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
