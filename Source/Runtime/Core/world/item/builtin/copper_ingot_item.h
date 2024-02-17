#pragma once

#include "item.h"

class CopperIngotItem : public Item {
 public:
  CopperIngotItem();
  ~CopperIngotItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
