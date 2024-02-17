#pragma once

#include "item.h"

class FoxSpawnEggItem : public Item {
 public:
  FoxSpawnEggItem();
  ~FoxSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
