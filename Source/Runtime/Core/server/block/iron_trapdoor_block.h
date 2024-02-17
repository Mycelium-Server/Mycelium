#pragma once

#include "block.h"

class IronTrapdoorBlock : public Block {
 public:
  IronTrapdoorBlock();
  ~IronTrapdoorBlock() override;

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
    HALF_TOP = 0,
    HALF_BOTTOM = 1,
  } half = HALF_BOTTOM;

  enum {
    OPEN_TRUE = 0,
    OPEN_FALSE = 1,
  } open = OPEN_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
