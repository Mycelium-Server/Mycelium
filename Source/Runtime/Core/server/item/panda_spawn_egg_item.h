#pragma once

#include "item.h"

class PandaSpawnEggItem : public Item {
 public:
  PandaSpawnEggItem();
  ~PandaSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
