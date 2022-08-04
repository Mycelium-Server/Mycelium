#pragma once

#include "block.h"

class PoweredRailBlock : public Block {
 public:
  PoweredRailBlock();
  ~PoweredRailBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

  enum {
    SHAPE_NORTH_SOUTH = 0,
    SHAPE_EAST_WEST = 1,
    SHAPE_ASCENDING_EAST = 2,
    SHAPE_ASCENDING_WEST = 3,
    SHAPE_ASCENDING_NORTH = 4,
    SHAPE_ASCENDING_SOUTH = 5,
  } shape = SHAPE_NORTH_SOUTH;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
