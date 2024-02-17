#pragma once

#include "item.h"

class RawCopperItem : public Item {
 public:
  RawCopperItem();
  ~RawCopperItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
