#pragma once

#include "item.h"

class FireworkStarItem : public Item {
 public:
  FireworkStarItem();
  ~FireworkStarItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
