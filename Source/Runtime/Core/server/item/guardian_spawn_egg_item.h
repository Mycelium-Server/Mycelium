#pragma once

#include "item.h"

class GuardianSpawnEggItem : public Item {
 public:
  GuardianSpawnEggItem();
  ~GuardianSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
