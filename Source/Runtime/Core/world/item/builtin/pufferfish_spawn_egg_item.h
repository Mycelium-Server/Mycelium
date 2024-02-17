#pragma once

#include "item.h"

class PufferfishSpawnEggItem : public Item {
 public:
  PufferfishSpawnEggItem();
  ~PufferfishSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
