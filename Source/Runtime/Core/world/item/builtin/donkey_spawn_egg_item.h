#pragma once

#include "item.h"

class DonkeySpawnEggItem : public Item {
 public:
  DonkeySpawnEggItem();
  ~DonkeySpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
