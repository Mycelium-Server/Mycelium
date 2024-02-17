#pragma once

#include "item.h"

class VindicatorSpawnEggItem : public Item {
 public:
  VindicatorSpawnEggItem();
  ~VindicatorSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
