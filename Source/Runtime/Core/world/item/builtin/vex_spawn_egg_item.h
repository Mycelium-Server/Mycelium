#pragma once

#include "item.h"

class VexSpawnEggItem : public Item {
 public:
  VexSpawnEggItem();
  ~VexSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
