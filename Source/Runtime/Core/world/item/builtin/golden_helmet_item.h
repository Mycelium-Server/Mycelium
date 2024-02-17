#pragma once

#include "item.h"

class GoldenHelmetItem : public Item {
 public:
  GoldenHelmetItem();
  ~GoldenHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
