#pragma once

#include "item.h"

class MuttonItem : public Item {
 public:
  MuttonItem();
  ~MuttonItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
