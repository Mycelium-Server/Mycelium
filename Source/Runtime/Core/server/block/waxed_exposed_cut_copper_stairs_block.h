#pragma once

#include "block.h"

class WaxedExposedCutCopperStairsBlock : public Block {
 public:
  WaxedExposedCutCopperStairsBlock();
  ~WaxedExposedCutCopperStairsBlock() override;

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
    SHAPE_STRAIGHT = 0,
    SHAPE_INNER_LEFT = 1,
    SHAPE_INNER_RIGHT = 2,
    SHAPE_OUTER_LEFT = 3,
    SHAPE_OUTER_RIGHT = 4,
  } shape = SHAPE_STRAIGHT;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
