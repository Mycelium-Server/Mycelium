#pragma once

#include "block.h"

class BubbleCoralBlock : public Block {
 public:
  BubbleCoralBlock();
  ~BubbleCoralBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
