#pragma once

#include "item.h"

class CharcoalItem : public Item {
 public:
  CharcoalItem();
  ~CharcoalItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
