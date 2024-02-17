#pragma once

#include "item.h"

class MagmaCreamItem : public Item {
 public:
  MagmaCreamItem();
  ~MagmaCreamItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
