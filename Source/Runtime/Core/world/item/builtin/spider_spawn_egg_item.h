#pragma once

#include "item.h"

class SpiderSpawnEggItem : public Item {
 public:
  SpiderSpawnEggItem();
  ~SpiderSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
