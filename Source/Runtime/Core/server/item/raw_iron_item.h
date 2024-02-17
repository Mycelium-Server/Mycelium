#pragma once

#include "item.h"

class RawIronItem : public Item {
 public:
  RawIronItem();
  ~RawIronItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
