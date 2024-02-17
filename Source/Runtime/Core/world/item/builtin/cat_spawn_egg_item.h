#pragma once

#include "item.h"

class CatSpawnEggItem : public Item {
 public:
  CatSpawnEggItem();
  ~CatSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
