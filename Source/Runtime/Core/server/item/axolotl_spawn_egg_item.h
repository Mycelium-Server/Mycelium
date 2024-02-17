#pragma once

#include "item.h"

class AxolotlSpawnEggItem : public Item {
 public:
  AxolotlSpawnEggItem();
  ~AxolotlSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
