#pragma once

#include "item.h"

class PufferfishItem : public Item {
 public:
  PufferfishItem();
  ~PufferfishItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
