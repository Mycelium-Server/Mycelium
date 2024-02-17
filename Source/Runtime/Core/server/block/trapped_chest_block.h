#pragma once

#include "block.h"

class TrappedChestBlock : public Block {
 public:
  TrappedChestBlock();
  ~TrappedChestBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    TYPE_SINGLE = 0,
    TYPE_LEFT = 1,
    TYPE_RIGHT = 2,
  } type = TYPE_SINGLE;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
