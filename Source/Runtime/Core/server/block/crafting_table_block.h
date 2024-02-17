#pragma once

#include "block.h"

class CraftingTableBlock : public Block {
 public:
  CraftingTableBlock();
  ~CraftingTableBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
