#pragma once

#include "item.h"

class ParrotSpawnEggItem : public Item {
 public:
  ParrotSpawnEggItem();
  ~ParrotSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
