#pragma once

#include "block.h"

class SmallDripleafBlock : public Block {
 public:
  SmallDripleafBlock();
  ~SmallDripleafBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    HALF_UPPER = 0,
    HALF_LOWER = 1,
  } half = HALF_LOWER;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
