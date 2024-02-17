#pragma once

#include "item.h"

class LlamaSpawnEggItem : public Item {
 public:
  LlamaSpawnEggItem();
  ~LlamaSpawnEggItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
