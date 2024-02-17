#pragma once

#include "item.h"

class CaveSpiderSpawnEggItem : public Item {
 public:
  CaveSpiderSpawnEggItem();
  ~CaveSpiderSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
