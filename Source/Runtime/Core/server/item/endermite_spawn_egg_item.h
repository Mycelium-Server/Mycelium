#pragma once

#include "item.h"

class EndermiteSpawnEggItem : public Item {
 public:
  EndermiteSpawnEggItem();
  ~EndermiteSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
