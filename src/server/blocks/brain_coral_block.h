#pragma once

#include "block.h"

class BrainCoralBlock : public Block {
 public:
  BrainCoralBlock();
  ~BrainCoralBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
