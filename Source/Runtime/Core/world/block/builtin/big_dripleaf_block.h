#pragma once

#include "block.h"

class BigDripleafBlock : public Block {
 public:
  BigDripleafBlock();
  ~BigDripleafBlock() override;

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
    TILT_NONE = 0,
    TILT_UNSTABLE = 1,
    TILT_PARTIAL = 2,
    TILT_FULL = 3,
  } tilt = TILT_NONE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};