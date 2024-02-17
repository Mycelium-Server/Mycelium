#pragma once

#include "item.h"

class JungleBoatItem : public Item {
 public:
  JungleBoatItem();
  ~JungleBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
