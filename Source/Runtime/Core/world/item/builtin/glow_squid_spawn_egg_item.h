#pragma once

#include "item.h"

class GlowSquidSpawnEggItem : public Item {
 public:
  GlowSquidSpawnEggItem();
  ~GlowSquidSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
