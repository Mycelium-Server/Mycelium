#pragma once

#include "item.h"

class AmethystShardItem : public Item {
 public:
  AmethystShardItem();
  ~AmethystShardItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
