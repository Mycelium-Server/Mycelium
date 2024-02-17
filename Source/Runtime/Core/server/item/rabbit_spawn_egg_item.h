#pragma once

#include "item.h"

class RabbitSpawnEggItem : public Item {
 public:
  RabbitSpawnEggItem();
  ~RabbitSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
