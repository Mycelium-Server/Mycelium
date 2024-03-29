#pragma once

#include "block.h"

class InfestedCrackedStoneBricksBlock : public Block {
 public:
  InfestedCrackedStoneBricksBlock();
  ~InfestedCrackedStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
