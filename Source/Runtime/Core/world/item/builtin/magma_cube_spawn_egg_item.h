#pragma once

#include "item.h"

class MagmaCubeSpawnEggItem : public Item {
 public:
  MagmaCubeSpawnEggItem();
  ~MagmaCubeSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
