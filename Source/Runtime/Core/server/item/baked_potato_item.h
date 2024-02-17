#pragma once

#include "item.h"

class BakedPotatoItem : public Item {
 public:
  BakedPotatoItem();
  ~BakedPotatoItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
