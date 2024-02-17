#pragma once

#include "item.h"

class WritableBookItem : public Item {
 public:
  WritableBookItem();
  ~WritableBookItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
