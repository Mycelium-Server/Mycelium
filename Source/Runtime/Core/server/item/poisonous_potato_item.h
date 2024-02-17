#pragma once

#include "item.h"

class PoisonousPotatoItem : public Item {
 public:
  PoisonousPotatoItem();
  ~PoisonousPotatoItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
