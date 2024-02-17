#pragma once

#include "item.h"

class OcelotSpawnEggItem : public Item {
 public:
  OcelotSpawnEggItem();
  ~OcelotSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
