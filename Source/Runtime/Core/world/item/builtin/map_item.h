#pragma once

#include "item.h"

class MapItem : public Item {
 public:
  MapItem();
  ~MapItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
