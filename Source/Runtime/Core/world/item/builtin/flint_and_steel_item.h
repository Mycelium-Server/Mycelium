#pragma once

#include "item.h"

class FlintAndSteelItem : public Item {
 public:
  FlintAndSteelItem();
  ~FlintAndSteelItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
