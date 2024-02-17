#pragma once

#include "item.h"

class SpruceBoatItem : public Item {
 public:
  SpruceBoatItem();
  ~SpruceBoatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
