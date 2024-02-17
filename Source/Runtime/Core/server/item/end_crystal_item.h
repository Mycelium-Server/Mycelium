#pragma once

#include "item.h"

class EndCrystalItem : public Item {
 public:
  EndCrystalItem();
  ~EndCrystalItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
