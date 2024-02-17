#pragma once

#include "block.h"

class InfestedStoneBricksBlock : public Block {
 public:
  InfestedStoneBricksBlock();
  ~InfestedStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
