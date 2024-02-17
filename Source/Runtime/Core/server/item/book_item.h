#pragma once

#include "item.h"

class BookItem : public Item {
 public:
  BookItem();
  ~BookItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
