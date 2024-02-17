#pragma once

#include "block.h"

class InfestedChiseledStoneBricksBlock : public Block {
 public:
  InfestedChiseledStoneBricksBlock();
  ~InfestedChiseledStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
