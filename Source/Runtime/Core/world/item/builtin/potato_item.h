#pragma once

#include "item.h"

class PotatoItem : public Item {
 public:
  PotatoItem();
  ~PotatoItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
