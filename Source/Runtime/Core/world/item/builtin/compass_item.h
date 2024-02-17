#pragma once

#include "item.h"

class CompassItem : public Item {
 public:
  CompassItem();
  ~CompassItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
