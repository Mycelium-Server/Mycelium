#pragma once

#include "item.h"

class DriedKelpItem : public Item {
 public:
  DriedKelpItem();
  ~DriedKelpItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
