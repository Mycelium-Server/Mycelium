#pragma once

#include "item.h"

class WrittenBookItem : public Item {
 public:
  WrittenBookItem();
  ~WrittenBookItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
