#pragma once

#include "item.h"

class TadpoleSpawnEggItem : public Item {
 public:
  TadpoleSpawnEggItem();
  ~TadpoleSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
