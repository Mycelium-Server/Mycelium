#pragma once

#include "item.h"

class LeatherHelmetItem : public Item {
 public:
  LeatherHelmetItem();
  ~LeatherHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
