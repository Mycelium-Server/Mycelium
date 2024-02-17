#pragma once

#include "item.h"

class DolphinSpawnEggItem : public Item {
 public:
  DolphinSpawnEggItem();
  ~DolphinSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
