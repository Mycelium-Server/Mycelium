#pragma once

#include "item.h"

class LeadItem : public Item {
 public:
  LeadItem();
  ~LeadItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
