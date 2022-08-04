#pragma once

#include "block.h"

class CraftingTableBlock : public Block {
 public:
  CraftingTableBlock();
  ~CraftingTableBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
