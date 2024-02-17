#pragma once

#include "item.h"

class NameTagItem : public Item {
 public:
  NameTagItem();
  ~NameTagItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
