#pragma once

#include "item.h"

class WanderingTraderSpawnEggItem : public Item {
 public:
  WanderingTraderSpawnEggItem();
  ~WanderingTraderSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
