#pragma once

#include "block.h"

class GreenShulkerBoxBlock : public Block {
 public:
  GreenShulkerBoxBlock();
  ~GreenShulkerBoxBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACING_NORTH = 0,
    FACING_EAST = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_UP = 4,
    FACING_DOWN = 5,
  } facing = FACING_UP;

};
