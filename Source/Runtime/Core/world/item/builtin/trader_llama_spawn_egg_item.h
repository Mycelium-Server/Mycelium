#pragma once

#include "item.h"

class TraderLlamaSpawnEggItem : public Item {
 public:
  TraderLlamaSpawnEggItem();
  ~TraderLlamaSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
