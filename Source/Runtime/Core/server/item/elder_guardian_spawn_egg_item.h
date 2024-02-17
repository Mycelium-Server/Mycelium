#pragma once

#include "item.h"

class ElderGuardianSpawnEggItem : public Item {
 public:
  ElderGuardianSpawnEggItem();
  ~ElderGuardianSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
